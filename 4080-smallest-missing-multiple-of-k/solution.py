class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        nums_set=set(nums)
        multi=k
        while multi in nums_set:
            multi+=k
        return multi

        
