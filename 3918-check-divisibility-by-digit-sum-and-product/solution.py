class Solution:
    def checkDivisibility(self, n: int) -> bool:
        orgNum = n
        digitSum = 0
        digitPro = 1
        while n > 0:
            digitSum += n % 10
            digitPro *= n % 10
            n //= 10
        return orgNum % (digitSum + digitPro) == 0
        

        
