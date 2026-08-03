class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        list1 = list(s)
        for char in t:
            if char not in list1:
                return char
            else:
                list1.remove(char)
        
        
