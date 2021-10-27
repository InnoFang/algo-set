/**
 * 127 / 127 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 16.1 MB 
 */
class Solution {
public:
    string str_;
    size_t size, valid_length, max_score;
    unordered_set<string> result;
    vector<string> removeInvalidParentheses(string s) {
        str_ = s; // store raw input string
        valid_length = size = s.size(); 

        // ·_extra· means the number of parentheses need to be removed, 
        // and `l_extra` is for count invalid `(`, `r_extra` is for counting invalid `)` 
        int l_extra = 0, r_extra = 0;

        // count the left and the right parenthesis
        int l_count = 0, r_count = 0;

        for (auto &c: s) {
            if (c == '(') {
                ++l_extra;
                ++l_count;
            } else if (c == ')') {
                if (l_extra != 0) --l_extra;
                else ++r_extra;
                ++r_count;
            }
        }
        // now the ·length· store the size of the valid string, after removing invalid parenthesis 
        valid_length -= l_extra + r_extra;
        
        // assume there is a score, which is increse 1 when encountering `(` and  decrease 1 when encountering `)`,
        // and it is valid string when the score is 0.
        // so the `max_score` means that the maximum number of parentheses that can meet the valid requirements.
        max_score = min(l_count, r_count);

        backtrack(0, "", l_extra, r_extra, 0);
        
        return vector<string>(result.begin(), result.end());
    }

    /** @idx: curr index of str_
     *  @curr: temporary result
     *  @l_extra: left parathenessis size can be removed
     *  @r_extra: right parathenessis size can be removed
     *  @score: valid paranetheses score
     * */
    void backtrack(int idx, string curr, int l_extra, int r_extra, int score) {
        if (l_extra < 0 || r_extra < 0 || score < 0 || score > max_score) 
            return;
        if (l_extra == 0 && r_extra == 0 && curr.size() == valid_length) 
            result.emplace(curr);
        if (idx == size)
            return;
        if (str_[idx] == '(') {
            backtrack(idx + 1, curr + str_[idx], l_extra, r_extra, score + 1);
            backtrack(idx + 1, curr, l_extra - 1, r_extra, score);
        } else if (str_[idx] == ')') {
            backtrack(idx + 1, curr + str_[idx], l_extra, r_extra, score - 1);
            backtrack(idx + 1, curr, l_extra, r_extra - 1, score);
        } else {
            backtrack(idx + 1, curr + str_[idx], l_extra, r_extra, score);
        }
    }
};