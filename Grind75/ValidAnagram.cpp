class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp; 
        if(s.length() != t.length())
            return false; 
        for (char c : s){
            if (mp.find(c) != mp.end()) 
                mp[c]++;
            else 
                mp[c] = 1;
        }
        for (char c : t){
            if (mp.find(c) != mp.end()){
                mp[c]--;
                if(mp[c] == 0)
                    mp.erase(c);
            } 
            else 
                return false; 
        }
    return true; 
    }
};