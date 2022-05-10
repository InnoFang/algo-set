"""
255 / 255 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        ans = 0
        curr_hour, curr_minu = map(int, current.split(':'))
        corr_hour, corr_minu = map(int, correct.split(':'))
        ans += corr_hour - curr_hour
        diff_minu = 0
        if curr_minu > corr_minu:
            ans -= 1
            diff_minu = 60 - curr_minu + corr_minu
        else:    
            diff_minu = corr_minu - curr_minu
        if diff_minu >= 15:
            c, diff_minu = divmod(diff_minu, 15)     
            ans += c
        if diff_minu >= 5:
            c, diff_minu = divmod(diff_minu, 5)     
            ans += c
        ans += diff_minu    
        return ans
