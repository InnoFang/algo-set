"""
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits)) == 1: 
            return "Flush"
        cnt = Counter(ranks)
        if len(cnt) == 5:
            return "High Card"
        for rank, c in cnt.items():
            if c > 2: 
                return "Three of a Kind"
        return "Pair"
        