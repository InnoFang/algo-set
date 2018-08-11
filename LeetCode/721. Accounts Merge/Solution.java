import java.util.*;

/**
 * Created by Inno Fang on 2018/3/29.
 */


/**
 * 49 / 49 test cases passed.
 * Status: Accepted
 * Runtime: 142 ms
 */
class Solution {
    private int[] parent;

    private int find(int p) {
        while (p != parent[p]) {
            p = parent[p] = parent[parent[p]];
        }
        return p;
    }

    private void union(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP != rootQ) parent[rootP] = rootQ;
    }

    public List<List<String>> accountsMerge(List<List<String>> accounts) {
        parent = new int[accounts.size()];
        for (int i = 0; i < accounts.size(); i++) {
            parent[i] = i;
        }

        HashMap<String, Integer> mail = new HashMap<>();
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 1; j < accounts.get(i).size(); j++) {
                String m = accounts.get(i).get(j);
                if (!mail.containsKey(m)) mail.put(m, i);
                else {
                    int k = mail.get(m);
                    if (accounts.get(k).get(0).equals(accounts.get(i).get(0))) union(k, i);
                }
            }
        }

        HashMap<Integer, TreeSet<String>> merged = new HashMap<>();
        for (int i = 0; i < parent.length; i++) {
            int a = find(i);
            if (!merged.containsKey(a)) merged.put(a, new TreeSet<>());
            merged.get(a).addAll(accounts.get(i));
        }

        List<List<String>> result = new ArrayList<>();
        merged.forEach((integer, strings) -> result.add(new ArrayList<>(strings)));
        return result;
    }
}