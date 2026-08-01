class Solution:
    def predictTheWinner(self, nums: List[int]) -> bool:
        taken = {}

        def game(i, j):
            if i == j:
                return nums[i]
            if (i, j) in taken:
                return taken[(i, j)]
         
            left = nums[i] - game(i + 1, j)
            right = nums[j] - game(i, j - 1)

            taken[(i, j)] = max(left, right)
            return taken[(i, j)]

        return game(0, len(nums) - 1) >= 0

