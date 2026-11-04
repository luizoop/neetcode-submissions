class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> sets(27);
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if(board[i][j] == '.')continue;
                if(!sets[i].insert(board[i][j]).second)return false;
                if(!sets[j + 9].insert(board[i][j]).second)return false;
                if(!sets[18 + ((i/3)) *3 + (j/3)].insert(board[i][j]).second)return false;
            }
        }
        return true;
    }
};
