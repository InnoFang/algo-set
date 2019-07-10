#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100005;
struct Node {
    int address, next, data = maxn;
    bool flag = false;
} nodes[maxn];

bool cmp(const Node& n1, const Node& n2) {
    return n1.flag && n2.flag ? n1.data < n2.data : n1.flag > n2.flag;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int N, head, address, cnt = 0;
    cin >> N >> head;

    for (int i = 0; i < N; ++ i) {
        cin >> address;
        cin >> nodes[address].data >> nodes[address].next;
        nodes[address].address = address;
    }
    
    for (; head != -1; head = nodes[head].next, ++ cnt) {
        nodes[head].flag = true;
    }

    if (0 == cnt) {
        cout << "0 -1" << endl;
    } else {
        sort(nodes, nodes + maxn, cmp);
        printf("%d %05d\n", cnt, nodes[0].address);
        for (int i = 0; i < cnt - 1; ++ i) {
            printf("%05d %d %05d\n",  nodes[i].address, nodes[i].data, nodes[i + 1].address);
        }
        printf("%05d %d -1\n",  nodes[cnt - 1].address, nodes[cnt - 1].data);
    }
    
#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
