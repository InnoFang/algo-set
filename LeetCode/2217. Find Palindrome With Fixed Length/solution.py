"""
162 / 162 test cases passed.
Runtime: 252 ms
Memory Usage: 24.3 MB
"""
class Solution:
    def kthPalindrome(self, queries: List[int], intLength: int) -> List[int]:
        ans = []
        n = (intLength + 1) >> 1
        beg_num = 1 * 10 ** (n - 1)
        end_num = 1 * 10 ** n - 1
        for q in queries:
            num = beg_num + q - 1
            if num > end_num:
                ans.append(-1)
                continue
            if intLength % 2 == 0:
                tmp = num * 10 ** (intLength - n) + int(str(num)[::-1])
                ans.append(tmp)
            elif intLength > 1:
                tmp = num * 10 ** (intLength - n) + int(str(num)[::-1][1:])
                ans.append(tmp)
            else:
                ans.append(num)    
        return ans        
                    