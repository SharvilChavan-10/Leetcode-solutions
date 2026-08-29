class Solution:
    def reverseDegree(self, s: str) -> int:
        total = 0
        reverse_alpha = "zyxwvutsrqponmlkjihgfedcba"
        index = 1
        for char in s:
            value = reverse_alpha.index(char) + 1
            product = value * index
            total += product
            index += 1
        return total
        
