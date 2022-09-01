"""
103 / 103 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        for i, pricei in enumerate(prices):
           for j, pricej in enumerate(prices[i + 1:]):
               if pricej <= pricei:
                   prices[i] = pricei - pricej 
                   break
        return prices
