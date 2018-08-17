public class Main {

    public static int[] getNext(String pattern) {
        int[] next = new int[pattern.length()];
        next[0] = 0;
        int index = 0;
        for (int i = 1; i < pattern.length();) {
            if (pattern.charAt(index) == pattern.charAt(i)) {
                next[i] = index + 1;
                ++i;
                ++index;
            } else {
                if (index != 0) {
                    index = next[index - 1];
                } else {
                    next[i] = 0;
                    ++i;
                }
            }
        }
        return next;
    }

    public static Integer getIndex(String text, String pattern) {
        int[] next = getNext(pattern);
        int t = 0, p = 0;
        while (t < text.length() && p < pattern.length()) {
            if (text.charAt(t) == pattern.charAt(p)) {
                ++t;
                ++p;
            } else {
                if (p != 0) p = next[p - 1];
                else t++;
            }
        }
        return p == pattern.length() ? t - p : -1;
    }

    public static Boolean hasSubstring(String text, String pattern) {
        return getIndex(text, pattern) != -1;
    }

    public static void main(String[] args) {
        String text = "abcabaaabaabcac";
        String pattern = "abaabcac";   
        System.out.println("Does the `text` contain the `pattern`? " + hasSubstring(text , pattern));
        System.out.println("What's the index that the `pattern` in the `text`? " + getIndex(text, pattern));
    }
}