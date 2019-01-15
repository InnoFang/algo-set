#include <iostream> 
#include <cstdio>
#include <cstring> 
#include <stack>

using namespace std;
 

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    char str[85];
    cin.getline(str, 85);
    char *word = strtok(str, " ");
    stack<char*> sentence;
    while (word) {
        sentence.push(word);
        word = strtok(NULL, " ");
    }
    while (!sentence.empty()) {
        char* w = sentence.top();
        sentence.pop();
        printf("%s", w);
        if (sentence.size() != 0) putchar(' ');
    }
    putchar('\n');

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}