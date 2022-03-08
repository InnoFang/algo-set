"""
14 / 14 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def minMutation(self, start: str, end: str, bank: List[str]) -> int:
        used, bank = set(), set(bank)
        if end not in bank: return -1
        # current gene, steps
        que = collections.deque([(start, 0)])
        while que:
            cur, step = que.popleft()
            if cur == end:
                return step
            for gene in bank:
                diff = 0
                for i in range(len(gene)):
                    if cur[i] != gene[i]:
                        diff += 1
                if diff == 1 and gene not in used:
                    used.add(gene)
                    que.append((gene, step + 1))
        return -1
