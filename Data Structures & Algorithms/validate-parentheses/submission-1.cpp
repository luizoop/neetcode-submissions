class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (char c: s){ 
            if(c == '[' || c == '(' || c == '{'){
                brackets.push(c);
                continue; 
            }
            if(c == ']' || c == ')' || c == '}'){
                if(brackets.empty()){
                    return false;
                }
                else if(c == ')'){
                    if(! ((c-1) == brackets.top())){
                        return false; 
                    }
                }
                else if(c == ']' || c == '}'){
                    if(! ((c - 2) == brackets.top())){
                        return false;
                    }
                }
                brackets.pop();
            }
        
        }
        if(brackets.size() == 0){
            return true;
        }
        return false;
    }
};
