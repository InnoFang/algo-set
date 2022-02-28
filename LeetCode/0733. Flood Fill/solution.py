"""
277 / 277 test cases passed.
Runtime: 28 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        if newColor == image[sr][sc]:
            return image
        m, n, old = len(image), len(image[0]), image[sr][sc]
        que = collections.deque([(sr, sc)])
        image[sr][sc] = newColor
        while que:
            x, y = que.pop();
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and image[xx][yy] == old:
                    que.append((xx, yy))
                    image[xx][yy] = newColor
        return image
