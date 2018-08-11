class Solution:
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        -----------------------
        20 / 20 test cases passed.
        Status: Accepted
        Runtime: 79 ms
        """
        if not tokens: return
        ops = {
            '+': lambda x, y: y + x,
            '-': lambda x, y: y - x,
            '*': lambda x, y: y * x,
            '/': lambda x, y: int(y / x)
        }
        vals = []
        for t in tokens:
            if t in ops:
                vals.append(ops[t](vals.pop(), vals.pop()))
            else:
                vals.append(int(t))
        return vals.pop()


if __name__ == '__main__':
    print(Solution().evalRPN(["2", "1", "+", "3", "*"]))
    print(Solution().evalRPN(["4", "13", "5", "/", "+"]))
    print(Solution().evalRPN(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]))
