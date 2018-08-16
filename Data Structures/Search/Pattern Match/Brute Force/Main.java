public class Main { 

    public static Integer getIndex(String text, String pattern) {
        int t = 0, p = 0;
        while (t < text.length() && p < pattern.length()) {
            if (text.charAt(t) == pattern.charAt(p)) {
                ++p;
                ++t;
            } else {
                t = t - p + 1;
                p = 0;
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