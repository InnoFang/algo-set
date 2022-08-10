"""
59 / 59 test cases passed.
Runtime: 52 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def solveEquation(self, equation: str) -> str:
        x = num = 0
        i, n, sign = 0, len(equation), 1
        while i < n:
            if equation[i] == '=':
                sign = -1
                i += 1
                continue

            s = sign
            if equation[i] == '+':
                i += 1
            elif equation[i] == '-':
                s = -s 
                i += 1

            k, valid = 0, False
            while i < n and equation[i].isdigit():
                valid = True
                k = k * 10 + int(equation[i])
                i += 1
            if i < n and equation[i] == 'x':
                x += s * k if valid else s
                i += 1
            else:
                num += s * k
            
        if x == 0:
            return "No solution" if num else "Infinite solutions"
        return f"x={-num//x}"
