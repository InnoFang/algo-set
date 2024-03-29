/**
 * 39 / 39 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    using ll = long long;
    string fractionToDecimal(int numerator, int denominator) {
        ll n = numerator;
        ll d = denominator;
        if (n % d == 0) {
            return to_string(n / d);
        }
        string decm = "";
        if ((n < 0) ^ (d < 0)) {
            decm += "-";
        }
        n = abs(n), d = abs(d);
        decm += to_string(n / d) + ".";

        unordered_map<ll, int> store;
        string frac("");
        for (int i = 0; (n = n % d * 10) != 0 && !store.count(n); i++) {
            store[n] = i;
            frac.push_back('0' + n / d);
        }
        if (n) {
            frac.insert(frac.begin() + store[n], '(');
            frac.push_back(')');
        }
        return decm + frac;
    }
};

/**
 * 39 / 39 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution2 {
public:
    using ll = long long;
    string fractionToDecimal(int numerator, int denominator) {
        ll n = numerator;
        ll d = denominator;
        if (n % d == 0) {
            return to_string(n / d);
        }

        string ans = ((n < 0) ^ (d < 0)) ? "-" : "";
        n = abs(n), d = abs(d);
        ans += to_string(n / d) + ".";

        unordered_map<ll, int> store;
        for (int i = ans.size(); (n = n % d * 10) != 0; i++) {
            if (store.count(n)) {
                ans.insert(ans.begin() + store[n], '(');
                ans += ')';
                break;
            }
            store[n] = i;
            ans += to_string(n / d);
        }
        return ans;
    }
};
