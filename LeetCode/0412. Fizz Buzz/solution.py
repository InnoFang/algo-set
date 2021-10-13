"""
8 / 8 test cases passed.
Runtime: 28 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        return ["FizzBuzz" if i % 3 == 0 and i % 5 == 0 else \
                "Fizz" if i % 3 == 0 else \
                "Buzz" if i % 5 == 0 else \
                str(i) for i in range(1, n + 1)]
