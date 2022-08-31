/**
 * 151 / 151 test cases passed.
 * Runtime: 1 ms
 * Memory Usage: 41.1 MB 
 */
class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        LinkedList<Integer> s = new LinkedList<>();
        int i = 0;
        for (int num : pushed) {
            s.addLast(num);
            while (!s.isEmpty() && s.getLast() == popped[i]) {
                s.pollLast();
                i += 1;
            }
        }
        return s.isEmpty();
    }
}
