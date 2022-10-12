"""
Runtime: 36 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        i = j = -1
        for k, (a, b) in enumerate(zip(s1, s2)):
            if a != b:
                if i == -1:
                    i = k
                elif j == -1:
                    j = k
                else:
                    return False
        return i == -1 or j != -1 and s1[i] == s2[j] and s1[j] == s2[i]
