class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        total = 0
        for num in range(len(nums)):
            if num % 2 == 0:
                total += nums[num]
            else:
                total -= nums[num]
        return total
        
