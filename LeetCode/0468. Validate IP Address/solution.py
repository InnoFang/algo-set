"""
73 / 73 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
import re
class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        IPv4 = '^(((\d)|([1-9]\d)|(1\d\d|2[0-4]\d)|(25[0-5]))\.){3}(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])$'
        IPv6 = '^([\da-fA-F]{1,4}:){7}[\da-fA-F]{1,4}$'
        if re.match(IPv4, queryIP):
            return 'IPv4'
        elif re.match(IPv6, queryIP):
            return 'IPv6'
        return 'Neither'
