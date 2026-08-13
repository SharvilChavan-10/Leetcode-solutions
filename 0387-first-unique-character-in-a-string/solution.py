class Solution:
    def firstUniqChar(self, s: str) -> int:
        for char in range(len(s)):
            if s.count(s[char]) == 1:
                return char
        return -1
