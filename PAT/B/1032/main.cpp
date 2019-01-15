#include <iostream> 
#include <cstdio>
#include <map>

using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    
    int N;
    map<int, int> dict;
    scanf("%d", &N);
    while (N--) {
        int id, score;
        scanf("%d%d", &id, &score);
        if (dict.find(id) == dict.end()) dict[id] = score;
        else dict[id] += score;
    }

    map<int, int>::iterator iter = dict.begin();
    pair<int, int> max = make_pair(iter->first, iter->second);
    for (; iter != dict.end(); ++iter) {
        if (iter->second > max.second) {
            max.first = iter->first;
            max.second = iter->second;
        }
    }
    printf("%d %d\n", max.first, max.second);

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}