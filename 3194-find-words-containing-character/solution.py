class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        index = -1
        result = []
        for char in words:
            index += 1
            if x in char:
                result.append(index)
        return result

