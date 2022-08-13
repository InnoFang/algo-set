/**
 * 139 / 139 test cases passed.
 * Runtime: 7 ms
 * Memory Usage: 40.8 MB 
 */
class Solution {
    public int maxChunksToSorted(int[] arr) {
        Stack<Integer> s = new Stack<>();
        for (Integer num : arr) {
            if (s.empty() || s.peek() <= num) {
                s.push(num);
            } else {
                int head = s.pop();
                while (!s.empty() && s.peek() > num) {
                    s.pop();
                }
                s.push(head);
            }
        }
        return s.size();
    }
}
