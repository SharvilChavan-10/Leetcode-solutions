class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxwealth = 0
        wealth = 0
        for customer in accounts:
            wealth = sum(customer)
            if wealth >= maxwealth:
                maxwealth = wealth
        return maxwealth
        
