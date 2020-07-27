#include<iostream> 
#include<queue> 

using namespace std; 

typedef struct {
    int x, y;
} coord;

int direct[4][2] = {
    {1, 0},
    {0, -1},
    {-1, 0},
    {0, 1}
};

char map[502][502];

int bfs(int n, int m, int x, int y) {
    map[x][y] = 'x';
    queue<coord> que;
    coord first;
    first.x = x;
    first.y = y;
    que.push(first);
    int ans = 0;
    while(!que.empty()) {
        coord tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int testX = tmp.x + direct[i][0];
            int testY = tmp.y + direct[i][1];
            if (testX >= 1 && testX <= n && testY >= 1 && testY <= m && map[testX][testY] != 'x') {
                if (map[testX][testY] == '*') {
                    ++ans;
                    map[testX][testY] = 'x';
                } else if (map[testX][testY] == '.') {
                    coord next;
                    next.x = testX;
                    next.y = testY;
                    que.push(next);
                    map[testX][testY] = 'x';
                }
            }
        }
    }
    return ans;
} 

int main() {  

#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   
    int T;
    while(~scanf("%d", &T)) { 
        for (int cas = 1; cas <= T; cas++) {
            int n, m, x, y;
            cin >> n >> m >> x >> y;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    cin >> map[i][j];
                }
            }
            int ans = bfs(n, m, x, y);
            printf("Case #%d: %d\n", cas, ans);
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif

    return 0;
}
