#include<bits/stdc++.h> 

using namespace std; 

typedef struct {
    int id;
    int cnt;
} Course;

int cmp(const void* a, const void* b) {
    Course* c1 = (Course*)a;
    Course* c2 = (Course*)b;
	return c2->cnt - c1->cnt;
}

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
    
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, p;
            cin >> n >> p;
            int prob = n * p / 100;
            Course course[60];
            for (int i = 0; i < 60; i++) {
                course[i].id = i;
                course[i].cnt = 0;

            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < 5; j++) {
                    int a;
                    cin >> a;
                    course[a].cnt++;
                }
            }
            qsort(course, 60, sizeof(course[0]), cmp);
            if (prob >= course[2].cnt) {
                cout << "no" << endl;
            } else {
                cout << "yes" << endl;
            }
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}