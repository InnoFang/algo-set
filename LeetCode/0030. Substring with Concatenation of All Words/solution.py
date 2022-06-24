"""
177 / 177 test cases passed.
Runtime: 728 ms
Memory Usage: 15.4 MB
"""
class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        s_len = len(s)
        w_len = len(words[0])
        ws_len = len(words)
        count = collections.Counter(words)
        ans = []
        for i in range(s_len):
            diff = collections.Counter()
            if i + w_len * ws_len > s_len:
                break
            for j in range(i, i + w_len * ws_len, w_len):
                word_clip = s[j:j+w_len]
                if word_clip not in count.keys():
                    break
                diff[word_clip] += 1
            if diff == count:
                ans.append(i)
        return ans
  