/**
 * Created by Inno Fang on 2018/3/19.
 */

class Solution {

    /**
     * 54 / 54 test cases passed.
     * Status: Accepted
     * Runtime: 6 ms
     * @param a
     * @param b
     * @return
     */
    public int superPow(int a, int[] b) {
        int mod = 1337;
        int result = 1;
        for (int i = b.length - 1; i >= 0; i--) {
            result = result * pow(a, b[i]) % mod;
            a = pow(a, 10);
        }
        return result;
    }

    /**
     * 快速幂
     * @param a
     * @param b
     * @return
     */
    public int pow(int a, int b) {
        int mod = 1337;
        a %= mod;
        int ans = 1;
        while (b != 0) {
            if ((b & 1) == 1) ans = (ans * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return ans;
    }
}