#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string handle(string str, int sign, int& accuracy) {
	while (str.size() > 0 && str[0] == '0') str.erase(str.begin());
	if (str.size() > 0 && str[0] == '.') {
		int i = 1;
		for (; str[i] == '0'; ++ i, -- accuracy);
		str.erase(str.begin(), str.begin() + i);
	} else {
		int i = 0;
		for (; i < str.size() && str[i] != '.'; ++ i, ++ accuracy);
		if (i < str.size() && str[i] == '.') str.erase(str.begin() + i);
	}
	if (str.size() == 0) {
		accuracy = 0;
	}
	string chopped;
	for (int i = 0; i < str.size() && sign; ++ i, -- sign) {
		chopped += str[i];
	}
	while (sign-- > 0)  chopped += '0';
	return chopped;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

	int sign;
	string strA, strB;
	while (cin >> sign >> strA >> strB) {
		int accuracyA = 0, accuracyB = 0;
		string chopA = handle(strA, sign, accuracyA);
		string chopB = handle(strB, sign, accuracyB);
		if (chopA == chopB && accuracyA == accuracyB) {
			cout << "YES 0." << chopA << "*10^" << accuracyA << endl; 
		} else {
			cout << "NO 0." << chopA << "*10^" << accuracyA << " 0." << chopB << "*10^" << accuracyB << endl;
		}
	}

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
