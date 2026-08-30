class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        result=[]
        for row in matrix:
            result.append(sum(row))
        return result
