class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> seen(27);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if (board[i][j] == '.') continue;
                int grid = (i / 3) * 3 + (j / 3) + 18; 
                int index = board[i][j];
                // for row 
                if(index == '.'){
                    continue;
                }
                if(!seen[i].insert(index).second){
                    return false;
                }
                // for column
                if (!seen[j+9].insert(index).second){
                    return false;
                }
                if (!seen[grid].insert(index).second){
                    return false;
                }
            }   
        }
        return true; 
    }
};
