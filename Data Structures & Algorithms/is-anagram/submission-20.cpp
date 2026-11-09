class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> seen(26,0);
        if(s.size() != t.size()){
            return false; 
        }
        for(int i = 0; i < s.size(); i++){
            seen[s[i]- 'a']++;
            seen[t[i]- 'a']--;
        }
        vector<int> check_vector(26,0);
        if(seen != check_vector){
            return false;
        }
        return true;
    }
};
