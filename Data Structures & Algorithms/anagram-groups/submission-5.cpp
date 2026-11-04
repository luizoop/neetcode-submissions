class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> count; 
        for (string str: strs){
            vector<int> hash(26, 0);
            for (char c : str){
                hash[c - 'a']++;
            }
            string key = to_string(hash[0]);
            for (int i = 1; i < hash.size(); ++i){
                key += "," + to_string(hash[i]);
            }
            count[key].push_back(str);
        }
        vector<vector<string>> res; 
        
        for (auto& entry: count){
            res.push_back(entry.second);
        }
        return res;
    };
};