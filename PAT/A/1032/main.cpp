#include <iostream>
#include <cstdio>

using namespace std;

struct Letter {
    char data;
    int next;
    bool visited = false; 
} letters[1000000]; 

int findSuffix(int head1, int head2) {
    int address = head1;
    while (address != -1) {
        letters[address].visited = true;
        address = letters[address].next;
    }
    address = head2;
    while (address != -1) {
        if (letters[address].visited) return address;
        address = letters[address].next;
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int head1, head2, N;
    while (cin >> head1 >> head2 >> N) {
        while (N--) {
            Letter letter;
            int address;
            cin >> address >> letter.data >> letter.next;
            letters[address] = letter;
        }
        int ans = findSuffix(head1, head2);
        if (ans == -1) cout << ans << endl;
        else printf("%05d\n", ans);
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
