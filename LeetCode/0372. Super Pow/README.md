# [372. Super Pow](https://leetcode.com/problems/super-pow/description/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)

</details>
<br />


Your task is to calculate _a^b_ mod 1337 where _a_ is a positive integer and _b_ is an extremely large positive integer given in the form of an array.

**Example1:**

>a = 2 <br/>
>b = [3]
>
>Result: 8

**Example2:**

>a = 2 <br/>
>b = [1,0]
>
>Result: 1024

## Solution

**题目大意**

给定一个正整数 a，一个整形数组 b 表示一个很大的正数，计算 _a^b_ mod 1337 的结果

**解题思路**

使用快速幂可以解决

但是这里有个问题就是 b 是个数组，并且表示一个很大的数，所以没办法把数组 b 换成一个正数，因为我们的数据类型可能存不下

所以为了形象的描述这个问题，举个例子 `a = 56`，`b = [1,2,3,4,5]`

那么这个例子就是在算 `a ^ 12345 % 1337`，所以我们将问题简化，每次只算一位，再把结果连乘

> (a^10000 * a^2000 * a^300 * a^40 * a^5) % 1337

而诸如 `a^2000` 又可以化成 `a^2*a^1000`，所以我们在用循环连乘快速幂结果后，还有更新 a ，每次变成原来的 10 次方

不过，这里还有个坑，就是如果 a 太大，计算就会溢出，所以保险的方式就是每次进行快速幂之前先对 a 取模，防止计算溢出

----------

```java
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
```