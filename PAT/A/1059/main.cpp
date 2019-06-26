#include <iostream>
#include <vector>

using namespace std;

const int maxn = 100005;

struct Factor {
	int prime, cnt;
};

vector<int> findPrime() {
	bool isPrime[maxn] = { false };
	vector<int> prime;
	for (int i = 2; i < maxn; ++ i) {
		if (!isPrime[i]) {
			prime.push_back(i);
			for (int j = i + i; j < maxn; j += i) {
				isPrime[j] = true;
			}
		}
	}
	return prime;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

	vector<int> prime = findPrime();
	int n, primeSize = prime.size();
	while (cin >> n) {
		vector<Factor> factors; 
		cout << n << "=";
		if (n == 1) {
			cout << 1 << endl;
			continue;
		}
		for (int i = 0; i < primeSize && n != 1; ++ i) {
			if (n % prime[i] == 0) {
				Factor factor;
				factor.prime = prime[i];
				factor.cnt = 0;
				while (n % prime[i] == 0) {
					factor.cnt ++;
					n /= factor.prime;
				}
				factors.push_back(factor);
			}
		}
		if (n != 1) {
			Factor factor;
			factor.prime = n;
			factor.cnt = 1;
			factors.push_back(factor);
		} 
		int size = factors.size();
		for (auto factor: factors) {
			cout << factor.prime;
			if (factor.cnt > 1) {
				cout << "^" << factor.cnt;
			}
			if (factor.prime != factors[size - 1].prime) cout << "*";
		}
		cout << endl;
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
