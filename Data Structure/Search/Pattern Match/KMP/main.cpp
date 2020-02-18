#include <iostream>
#include <string> 
 
int * getNext(std::string pattern) {
	// get the length of `pattern`
	int len = pattern.length();
	int * next = new int[len];
	int index = 0;
	// the first value is default zero
	next[0] = 0;
	for (int i = 1; i < len;) {
		if (pattern[i] == pattern[index]) {
			next[i] = index + 1;
			index++;
			i++;
		} else {
			if (index != 0) {
				index = next[index - 1];
			} else {
				next[i] = 0;
				i++;
			}
		}
	}
	return next;
}

int getIndex(std::string text, std::string pattern) {
	int * next = getNext(pattern);
	int t = 0;
	int p = 0;
	while (t < text.length() && p < pattern.length()) {
		if (text[t] == pattern[p]) {
			t++;
			p++;
		} else {
			if (p != 0)  p = next[p - 1];
		    else  t++;
		} 
	}
	return p == pattern.length() ? t - p : -1;
}

bool hasSubstring(std::string text, std::string pattern) {
	return getIndex(text, pattern) != -1;
}

int main() { 
    std::string text = "abcabaaabaabcac";
    std::string pattern = "abaabcac";  
    std::cout << hasSubstring(text, pattern) << std::endl;
    return 0;
}

