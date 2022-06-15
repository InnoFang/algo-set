"""
146 / 151 test cases passed.
Runtime: 164 ms
Memory Usage: 17.7 MB
"""
class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        temp = []
        for s in sentence.split():
            if re.match('^\$\d+$', s):
                price = int(s[1:]) * (100 - discount) / 100
                temp.append("${:.2f}".format(price))
            else:
                temp.append(s)    
        return ' '.join(temp)       
                