"""
165 / 165 test cases passed.
Runtime: 40 ms
Memory Usage: 16.8 MB
"""
class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        idx = bisect.bisect_right(letters, target)
        return letters[idx] if idx < len(letters) else letters[0]
