# [Last digit of a large number](https://www.codewars.com/kata/5511b2f550906349a70004e1/train/python)

## Instructions

Define a function

```
def last_digit(n1, n2):
  return
```

that takes in two numbers `a` and `b` and returns the last decimal digit of `a^b`. Note that `a` and `b` may be very large!

For example, the last decimal digit of `9^7` is `9`, since `9^7 = 4782969`. The last decimal digit of `(2^200)^(2^300)`, which has over `10^92` decimal digits, is `6`.

The inputs to your function will always be non-negative integers.

Examples

```
last_digit(4, 1)                # returns 4
last_digit(4, 2)                # returns 6
last_digit(9, 7)                # returns 9
last_digit(10, 10 ** 10)        # returns 0
last_digit(2 ** 200, 2 ** 300)  # returns 6
```

## Remarks

**JavaScript**

Since JavaScript doesn't have native arbitrary large integers, your arguments are going to be strings representing non-negative integers, e.g.

```
lastDigit("10", "10000000000");
```

The kata is still as hard as the variants for Haskell or Python, don't worry.

`ALGORITHMS`