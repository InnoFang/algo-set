"""
49 / 49 test cases passed.
Runtime: 44 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def validUtf8(self, data: List[int]) -> bool:
        bit_index = 0
        for num in data:
            if bit_index == 0:
                if num >> 5 == 0b110: 
                    bit_index = 1
                elif num >> 4 == 0b1110: 
                    bit_index = 2
                elif num >> 3 == 0b11110: 
                    bit_index = 3
                elif num >> 7 == 1: 
                    return False
            else:
                if num >> 6 == 0b10: 
                    bit_index -= 1
                else:
                    return False
        return bit_index == 0
