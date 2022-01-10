/**
 * 42 / 42 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
private:
public:
    bool isAdditiveNumber(string num) {
        for (int i = 1; i < num.size(); ++ i) {
            for (int j = i + 1; j < num.size(); ++ j) {
                if (valid(num, 0, i, j)) return true;
            }
        }
        return false;
    }

    bool valid(string &num, int i, int j, int k) {
        // return false if the 1st or the 2nd number start with 0 but it isn't 0
        if (num[i] == '0' && j != i + 1) return false; 
        if (num[j] == '0' && k != j + 1) return false;

        string a = num.substr(i, j - i);
        string b = num.substr(j, k - j);

        string sum = add(a, b); 
        // if the length of the sum string is longger than the rest of num's, return false
        if (k + sum.size() > num.size()) return false;

        for (int s = 0; s < sum.size(); ++ s) {
            if (sum[s] != num[k + s]) return false;
        }
        if (k + sum.size() == num.size()) return true;
        return valid(num, j, k, k + sum.size());
    }

    /* use unsigned integer type to handle overflow for very large number addition */
    string add(const string &a, const string &b) {
        size_t sum = stoul(a) + stoul(b);
        return to_string(sum);
    }
};
