"""
93 / 93 test cases passed.
Runtime: 432 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def maxConsecutiveAnswers(self, answerKey: str, k: int) -> int:
        def sliding(ch):
            ans = l = total = 0
            for r in range(len(answerKey)):
                total += answerKey[r] != ch
                while total > k:
                    total -= answerKey[l] != ch
                    l += 1
                ans = max(ans, r - l + 1)
            return ans
        return max(sliding('T'), sliding('F')) 
