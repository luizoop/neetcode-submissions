class Solution {
public:
    string encode(vector<string>& strs) {
        size_t count = 0;
        for(string& s : strs){
            count += s.size() + 4;
        }
        string out;
        out.reserve(count);
        for(string& s : strs){
            out += to_string(s.size());
            out.push_back('#'); 
            out += s;
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<string> out;
        size_t count = 0; 
        while (count < s.size()){
            int len = 0;
            while(s[count] != '#'){
                len = (len * 10) + (s[count] - '0');
                count++;
            }
            count++;
            out.emplace_back(s, count, len);
            count += len;
        }
        return out;
    }
};
