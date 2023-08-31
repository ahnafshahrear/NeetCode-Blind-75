#Link: https://leetcode.com/problems/valid-palindrome/

class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1
        while l < r:
            while l < r and not self.alpha(s[l]):
                l += 1
            while l < r and not self.alpha(s[r]):
                r -= 1
            if s[l].lower() != s[r].lower():
                return False
            l += 1
            r -= 1
        return True

    def alpha(self, ch):
        return (
            ord("A") <= ord(ch) <= ord("Z") or ord("a") <= ord(ch) <= ord("z")
            or ord("0") <= ord(ch) <= ord("9") 
        )        
