class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        count = 0
        for i in nums:
            while i % 3 != 0:
                if i % 3 == 1:
                    i -= 1
                    count += 1
                else:
                    i += 1
                    count += 1
        return count
            

        
