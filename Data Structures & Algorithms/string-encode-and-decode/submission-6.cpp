class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded_str = "";
        for (string& str : strs){
            for (char& c : str){
                encoded_str.push_back(c + 'k');
            }
            encoded_str.push_back('#');
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_list;
        int i = 0;
        string word = "";  
        while(i < s.size()){
            if (s.begin()+i == s.end()){
                return decoded_list;
            }
            if (s[i] == '#'){
                decoded_list.push_back(word);
                word = "";
            } else {
                word.push_back(s[i] - 'k');
            }
            i++;
        }
        return decoded_list; 
    }
};
