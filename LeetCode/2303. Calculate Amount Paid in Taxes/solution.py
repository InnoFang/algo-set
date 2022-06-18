"""
227 / 227 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        if not income:
            return 0
        if income < brackets[0][0]:
            return income * brackets[0][1] / 100
        ans = brackets[0][0] * brackets[0][1] / 100
        for i in range(1, len(brackets)):
            if income >= brackets[i][0]:
                ans += (brackets[i][0] - brackets[i - 1][0]) * brackets[i][1] / 100
            else:
                ans += (income - brackets[i - 1][0]) * brackets[i][1] / 100
                break
        return ans        
        