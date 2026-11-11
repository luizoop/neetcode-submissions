class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen;
        for (string str : strs){
            vector<int> key(26,0);
            for(char ch : str){
                key[ch - 'a']++;
            }

            string string_key = to_string(key[0]);
            for(int i = 1; i < 26; i++){
                string_key += "," + to_string(key[i]);
            }
            seen[string_key].push_back(str);
        }
        vector<vector<string>> res;
        res.reserve(strs.size());
        for(const auto [key, value] : seen){
            res.push_back(value);
        }
        return res;
    }
};
