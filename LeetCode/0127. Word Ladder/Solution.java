import java.util.*;

/**
 * Created by Inno Fang on 2018/3/6.
 */

class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        HashSet<String> dict = new HashSet<>(wordList);
        Queue<String> que = new LinkedList<>();
        que.add(beginWord);
        int level = 1;
        while (!que.isEmpty()) {
            for (int i = 0, size = que.size(); i < size; i++) {
                String word = que.poll();
                for (int j = 0, length = word.length(); j < length; j++) {
                    char[] chars = word.toCharArray();
                    char tmp = chars[j];
                    for (char c = 'a'; c <= 'z'; c++) {
                        chars[j] = c;
                        String newWord = new String(chars);
                        if (dict.contains(newWord)) {
                            if (newWord.equals(endWord)) return level + 1;
                            dict.remove(newWord);
                            que.add(newWord);
                        }
                        chars[j] = tmp;
                    }

                }
            }
            level++;
        }
        return 0;
    }

    public static void main(String[] args) {
        int res;
        res = new Solution().ladderLength(
                "hit",
                "cog",
                Arrays.asList("hot", "dot", "dog", "lot", "log", "cog"));
        System.out.println(res);
        res = new Solution().ladderLength(
                "hit",
                "cog",
                Arrays.asList("hot", "dot", "dog", "lot", "log"));
        System.out.println(res);
    }
}