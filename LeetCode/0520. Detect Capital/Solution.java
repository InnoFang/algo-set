/**
 * 550 / 550 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 36.7 MB 
 */
class Solution {
    public boolean detectCapitalUse(String word) {
        boolean allUpper = (word.charAt(0) < 'a') && !(word.length() > 1 && word.charAt(1) >= 'a');
        if (allUpper) {
            for (int i = 1; i < word.length(); i++) {
                if (word.charAt(i) >= 'a') return  false;
            }
        } else {
            for (int i = 1; i < word.length(); i++) {
                if (word.charAt(i) < 'a') return  false;
            }
        }
        return true;
    }
}
