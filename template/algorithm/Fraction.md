## Fraction (分数)

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Fraction {
	int up, down;
};

/**
 * 1. 使 down 为非负数，如果分数为负，令分子 up 和分母 down 都变为相反数
 * 2. 如果分数为 0，规定分子为 0，分母为 1
 * 3. 分子和分母没有除了 1 以外的公约数，求出分子分母绝对值的最大公约数，并分别除之 
 */
Fraction reduction (Fraction result) {
	if (result.down < 0) {
		result.up = -result.up;
		result.down = -result.down;
	}
	if (result.up == 0) {
		result.down = 1;
	} else {
		int gcd = __gcd(abs(result.up), abs(result.down));
		result.up /= gcd;
		result.down /= gcd;
	}
	return result;
}

/* 四则运算 */
Fraction plus(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down + f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
} 

Fraction minu(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down - f2.up * f1.down;
	result.down = f1.down * f2.down;
	return reduction(result);
}

Fraction mult(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.up;
	result.down = f1.down * f2.down;
	return reduction(result);
}

Fraction divi(Fraction f1, Fraction f2) {
	Fraction result;
	result.up = f1.up * f2.down;
	result.down = f1.down * f2.up;
	return reduction(result);
} 
```
