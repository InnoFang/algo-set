"""
62 / 62 test cases passed.
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.', '[.]')
