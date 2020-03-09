# [537. Complex Number Multiplication](https://leetcode.com/articles/complex-number-multiplication/)

![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Math`](https://leetcode.com/tag/math/)
* [`String`](https://leetcode.com/tag/string/)

</details>
<br />

Given two strings representing two complex numbers.

You need to return a string representing their multiplication. Note i2 = -1 according to the definition.

## Example 1:
```
Input: "1+1i", "1+1i"
Output: "0+2i"
Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
```
## Example 2:
```
Input: "1+-1i", "1+-1i"
Output: "0+-2i"
Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.
```
## Note:

 1. The input strings will not have extra blank.
 2. The input strings will be given in the form of a+bi, where the integer a and b will both belong to the range of [-100, 100]. And the output should be also in this form.

# Solution (Java)

```java
public String complexNumberMultiply(String a, String b) {
        StringBuilder sb = new StringBuilder();
        String[] tokenA = a.split("\\+|i");
        String[] tokenB = b.split("\\+|i");
        int realA = Integer.parseInt(tokenA[0]);
        int realB = Integer.parseInt(tokenB[0]);
        int imgA = Integer.parseInt(tokenA[1]);
        int imgB = Integer.parseInt(tokenB[1]);
        int real = realA * realB - imgA * imgB;
        int complex = realA * imgB + imgA * realB;
        sb.append(real).append("+").append(complex).append("i");
        return sb.toString();
    }
```
