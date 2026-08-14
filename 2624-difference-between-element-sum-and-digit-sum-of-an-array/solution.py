class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        elmtSum = 0
        digitSum = 0
        for num in nums:
            while num > 0:
                digitSum += num % 10
                num //= 10
        for num in nums:
            elmtSum += num
        diff = elmtSum - digitSum
        return diff

        
        
