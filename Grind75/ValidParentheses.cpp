class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;  
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                   if(stk.empty())
                        return false; 
                    char c = stk.top(); 
                    stk.pop(); 
                    if(s[i] == ')' && c != '(')
                        return false; 
                    if(s[i] == '}' && c != '{')
                        return false;
                    if(s[i] == ']' && c != '[')
                        return false; 
            }
             if(s[i] != ')' && s[i] != ']' && s[i] != '}')
                stk.push(s[i]); 
        }
        if(stk.empty() == true)
            return true; 
        else 
            return false;
    }
};

// Run time: 0ms 
// Memory: 6.2MB