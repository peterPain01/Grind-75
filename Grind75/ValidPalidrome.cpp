class Solution {
public:
    void removeSpecial(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isalpha(s[i]) && !isdigit(s[i]))
        {
            s.erase(i, 1);
            i--;
        }
    }
    return; 
}

bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower); // Lowercase string
    removeSpecial(s); // Remove non-alphanumeric characters
    int n = s.length();
    for (int i = 0, j = n - 1; i <= j; ++i, --j)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}
};

// Runtime: 512ms 
// Memory: 7.2MB