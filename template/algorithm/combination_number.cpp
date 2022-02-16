#include <bits/stdc++.h>

using namespace std;

void assert_equal(size_t produce, size_t predict, size_t line) {
	string judgement = produce == predict ? "passed" : "failed";
	cout << "line: " << line << ": " << judgement << endl;
}

#define ASSERT_EQUAL(PRO, PRE) (assert_equal(PRO, PRE, __LINE__));

size_t C1(size_t m, size_t n) {
	if (m < n) return 0;
	if (n < (m >> 1)) n = m - n;

	size_t res = 1;
 	for (size_t i = m, j = 1; j <= n; --i, ++j) {
    	res = res * i / j;
	}
	return res;
}

/* Better than above */
size_t C2(size_t m, size_t n) {
	if (m < n) return 0;
	if (n < (m >> 1)) n = m - n;
	
	double s1 = 0;
	for (size_t i = n + 1; i <= m; ++ i) s1 += log(double(i));
	
	double s2 = 0;
	size_t upper = m - n;
	for (size_t i = 1; i <= upper; ++ i) s2 += log(double(i));

	double result = exp(s1 - s2);
	return static_cast<size_t>(round(result));
}


int main() {
	ASSERT_EQUAL(C1(5, 2), 10);
	ASSERT_EQUAL(C1(5, 3), 10);
	ASSERT_EQUAL(C2(5, 2), 10);
	ASSERT_EQUAL(C2(5, 3), 10);
	ASSERT_EQUAL(C2(30, 12), 86493225);
	ASSERT_EQUAL(C2(30, 18), 86493225);
	return 0;
}
