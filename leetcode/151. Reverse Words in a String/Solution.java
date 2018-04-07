import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.StringJoiner;
import java.util.stream.Collectors;

/**
 * Created by Inno Fang on 2018/4/7.
 */
public class Solution {

    /**
     * 22 / 22 test cases passed.
     * Status: Accepted
     * Runtime: 86 ms
     * @param s
     * @return
     */
    public String reverseWords(String s) {
        List<String> words = Arrays.asList(s.trim().split("\\s+"));
        Collections.reverse(words);
        return words.stream().collect(Collectors.joining(" "));
    }

    /**
     * 22 / 22 test cases passed.
     * Status: Accepted
     * Runtime: 11 ms
     * @param s
     * @return
     */
    public String reverseWords2(String s) {
        List<String> words = Arrays.asList(s.trim().split("\\s+"));
        Collections.reverse(words);
        return String.join(", ", words);
    }


    /**
     * 22 / 22 test cases passed.
     * Status: Accepted
     * Runtime: 10 ms
     * @param s
     * @return
     */
    public String reverseWords3(String s) {
        StringJoiner sj = new StringJoiner(" ");
        String[] words = s.trim().split("\\s+");
        for (int i = words.length - 1; i >= 0; i--) sj.add(words[i]);
        return sj.toString();
    }

    public static void main(String[] args) {
        System.out.println(new Solution().reverseWords("the sky is blue"));
    }
}
