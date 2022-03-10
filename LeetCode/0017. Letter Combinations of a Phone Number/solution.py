"""
25 / 25 test cases passed.
Runtime: 32 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
            
        phone_map = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz",
        }

        ans = []
        def dfs(idx, path):
            if idx == len(digits):
                ans.append(path[:])
                return 
            for x in phone_map[digits[idx]]:
                dfs(idx + 1, path + x)
        dfs(0, "")
        return ans
