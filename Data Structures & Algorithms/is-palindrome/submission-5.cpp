#include <locale>

class Solution {
public:
    bool isPalindrome(string s) {
        auto it = s.begin();
        auto ix = s.end() -1;

        while(it < ix){
            if(!std::isalnum(static_cast<unsigned char>(*it))){
                it++;
                continue;
            }
            if(!std::isalnum(static_cast<unsigned char>(*ix))){
                ix--;
                continue;
            }
            if(std::tolower(*it) != std::tolower(*ix)){
                return false; 
            }
            it++;
            ix--;
        }
        return true; 
    }
};
