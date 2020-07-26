#include<bits/stdc++.h> 

using namespace std; 

typedef struct {
    int cnt;
    char type; 
} flower;

int cmp(const void* a, const void* b) {
    flower* f1 = (flower*)a;
    flower* f2 = (flower*)b;
	return f1->cnt != f2->cnt ? f2->cnt - f1->cnt : f1->type - f2->type;
    // return f2->cnt - f1->cnt;
}

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, m;
            cin >> n >> m;
            flower tulips[26];
            for (int i = 0; i < 26; i++) {
                tulips[i].cnt = 0;
                tulips[i].type = 'A' + i;
            }
            int typeCnt = 0;
            for (int i = 0; i < n; i++) {
            	string row;
            	cin >> row;
                for (int j = 0; j < m; j++) {
                    char type = row[j];
                    if (tulips[type - 65].cnt == 0) {
                        typeCnt++;
                    }
                    tulips[type - 65].cnt++; 
                }
            }
            qsort(tulips, 26, sizeof(tulips[0]), cmp);
            cout << typeCnt << endl;
            for (int i = 0; i < typeCnt; i++) { 
                cout << tulips[i].cnt << " " << tulips[i].type << endl;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
