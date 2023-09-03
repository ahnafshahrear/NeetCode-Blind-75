class Solution {
public:
    bool isPalindrome(string s) 
    {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            while (!isalnum(s[start]) and start < end) start++;
            while (!isalnum(s[end]) and start < end) end--;
            if (tolower(s[start]) != tolower(s[end])) 
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
