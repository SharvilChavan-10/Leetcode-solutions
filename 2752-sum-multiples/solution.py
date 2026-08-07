class Solution:
    def sumOfMultiples(self, n: int) -> int:
        total = 0
        for nums in range(1,n+1):
            if nums % 3 == 0 or nums % 5 == 0 or nums % 7 == 0:
                total += nums
        return total
