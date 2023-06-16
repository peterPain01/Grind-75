class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freg[26] = {0};

        for(int i = 0; i < magazine.length(); ++i){
            freg[magazine[i] - 'a']++; 
        }
        for(int i = 0; i < ransomNote.length(); ++i){ 
            freg[ransomNote[i] - 'a']--; 
            if(freg[ransomNote[i] - 'a'] < 0)
                return false; 
        }
        return true; 
    }
};