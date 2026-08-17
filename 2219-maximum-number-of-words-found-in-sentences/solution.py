class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        longest = 0
        for words in sentences:
            x = len(words.split())
            if x > longest:
                longest = x
        return longest
        
