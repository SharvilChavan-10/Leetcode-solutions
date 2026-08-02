class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        missing = []
        sets = set(nums)
        for x in range(min(nums),max(nums)+1):
            if x not in sets:
                missing.append(x)
        return missing

        
