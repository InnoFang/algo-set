"""
15 / 15 test cases passed.
Runtime: 36 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stk, dct = [], {}
        for num in nums2:
            while stk and stk[-1] < num:
                dct[stk.pop()] = num
            stk.append(num) 
        return [dct[num] if num in dct else -1 for num in nums1]
        

"""
15 / 15 test cases passed.
Runtime: 36 ms
Memory Usage: 15.2 MB
"""
class Solution2:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stk, dct = [], {}
        for num in reversed(nums2):
            while stk and num >= stk[-1]:
                stk.pop()
            dct[num] = stk[-1] if stk else -1
            stk.append(num) 
        return [dct[num] for num in nums1]
       