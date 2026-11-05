class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letters(26, 0);
        if (s.size() != t.size()){
            return false;
        } 
        for (int i = 0; i < s.size(); i++){
            letters[s[i]-'a']++;
            letters[t[i]-'a']--;
        }
        
        vector<int> compare(26,0);
        if (letters == compare){
            return true;
        }
    
        return false;
    }
    
};
