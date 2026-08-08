class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        Product = 1
        Sum = 0
        while n > 0:
            num = n % 10
            Product *= num
            Sum += num
            n //= 10
        return Product - Sum 

        
