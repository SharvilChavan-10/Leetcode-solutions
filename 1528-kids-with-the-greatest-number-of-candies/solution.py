class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        maxs = max(candies)
        for candie in candies:
            if candie + extraCandies >= maxs:
                result.append(True)
            else:  
                result.append(False)
        return result     
