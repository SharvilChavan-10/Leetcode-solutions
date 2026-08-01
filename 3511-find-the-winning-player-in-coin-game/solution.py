class Solution:
    def winningPlayer(self, x: int, y: int) -> str:
        winner = min(x, y // 4)
        return "Alice" if winner % 2 == 1 else 'Bob'
