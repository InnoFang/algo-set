"""
Runtime: 32 ms
Memory Usage: 15 MB
"""
class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return [celsius + 273.15, celsius * 1.8 + 32]
