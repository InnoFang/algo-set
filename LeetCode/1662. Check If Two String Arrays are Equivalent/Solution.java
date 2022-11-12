/**
 * Runtime: 1 ms
 * Memory Usage: 39.1 MB 
 */
class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        return String.join("", word1).equals(String.join("", word2));
    }
}
