/**
 * 152 / 152 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int, int> secret_map, guess_map;
        int bulls = 0, cows = 0;
        for (int i = 0; i < secret.size(); ++i) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                secret_map[secret[i] - '0']++;
                guess_map[guess[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++) {
            cows += min(secret_map[i], guess_map[i]);
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
