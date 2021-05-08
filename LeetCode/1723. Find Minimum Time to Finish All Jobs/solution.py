"""
60 / 60 test cases passed.
Runtime: 64 ms
Memory Usage: 14.5 MB
"""
class Solution:
    def minimumTimeRequired(self, jobs: List[int], k: int) -> int:
        def dfs(workers, idx, limit):
            if idx >= len(jobs):
                return True
            for i in range(len(workers)):
                if workers[i] + jobs[idx] <= limit:
                    workers[i] += jobs[idx]
                    if dfs(workers, idx + 1, limit):
                        return True
                    workers[i] -= jobs[idx]
                if workers[i] == 0 or workers[i] + jobs[idx] == limit:
                    break
            return False

        jobs.sort(reverse=True) 
        l, r = max(jobs), sum(jobs)
        while l < r:
            mid = l + r >> 1
            if dfs([0] * k, 0, mid):
                r = mid
            else:
                l = mid + 1
        return l
