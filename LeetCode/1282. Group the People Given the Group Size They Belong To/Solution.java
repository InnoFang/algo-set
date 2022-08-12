/**
 * 103 / 103 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 42.2 MB 
 */
class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        HashMap<Integer, LinkedList<LinkedList<Integer>>> rec = new HashMap<>();
        for (int i = 0; i < groupSizes.length; i ++ ){
            int gs = groupSizes[i];
            if (!rec.containsKey(gs)) {
                LinkedList<LinkedList<Integer>> tmp = new LinkedList<>();
                tmp.add(new LinkedList<Integer>());
                rec.put(gs, tmp);
            } else if (rec.get(gs).getLast().size() == gs) {
                rec.get(gs).add(new LinkedList<Integer>());
            }
            rec.get(gs).getLast().add(i);
        }
        List<List<Integer>> ans = new LinkedList<>();
        for (LinkedList<LinkedList<Integer>> values: rec.values()) {
            for (LinkedList<Integer> value: values) {
                ans.add(value);
            }
        }
        return ans;
    }
}
