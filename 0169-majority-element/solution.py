class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        majority = nums[len(nums) // 2]
        if nums.count(majority) > len(nums) // 2:
            return majority
   
            
              

       

        
