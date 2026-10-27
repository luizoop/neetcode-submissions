class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        for (const auto str : strs){
            std::vector<int> count (26, 0);
            for (char c : str){
                count[c - 'a']++;
            }

            std::string key = to_string(count[0]);
            for (int i = 1; i < count.size(); i++){
                key += ", " + to_string(count[i]);
            }
            groups[key].push_back(str);
        }

        std::vector<std::vector<std::string>> result{}; 
        for (std::pair<std::string, std::vector<std::string>> p : groups){
            result.push_back(p.second);
        }
        return result; 
    }
};
