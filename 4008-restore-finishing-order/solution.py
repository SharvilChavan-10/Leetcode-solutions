class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        friend = set(friends)
        result = []
        for ids in order:
            if ids in friend:
                result.append(ids)
        return result

        
