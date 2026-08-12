class Solution:
    def reverseWords(self, s: str) -> str:
        sentence = s.split()
        sentence.reverse()
        final_sentence = " ".join(sentence)
        return final_sentence
        
