class Solution:
    def countDigits(self, num: int) -> int:
        digit = 0
        for s in str(num):
            i = int(s)
            if i != 0:
                if num % i == 0:
                    digit += 1
        return digit
                
        
