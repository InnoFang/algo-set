#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Testee{
    string number;
    int score;
    int finalRank;
    int locationNumber;
    int localRank;
};

bool cmp(const Testee& t1, const Testee& t2) {
    return t1.score == t2.score ? t1.number < t2.number : t1.score > t2.score;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    int N;
    while (cin >> N) {
        vector<Testee> total;
        for (int n = 1; n <= N; ++ n) {  
            int k;
            cin >> k;
            Testee testee[k];
            for (int i = 0; i < k; ++ i) {
                cin >> testee[i].number >> testee[i].score;
            }
            sort(testee, testee + k, cmp);
            for (int rank, i = 0; i < k; ++ i) {
                if (i > 0 && testee[i].score == testee[i - 1].score) rank = testee[i - 1].localRank;
                else rank = i + 1;
                testee[i].localRank = rank;
                testee[i].locationNumber = n;
                total.push_back(testee[i]);
            }
        }
        sort(total.begin(), total.end(), cmp);
        int totalSize = total.size();
        cout << totalSize << endl;
        for (int rank, i = 0; i < totalSize; ++ i) {
            if (i > 0 && total[i].score == total[i - 1].score) rank = total[i - 1].finalRank;
            else rank = i + 1;
            total[i].finalRank = rank;
            cout << total[i].number << " " << total[i].finalRank << " " << total[i].locationNumber << " " << total[i].localRank << endl;
        }
    }

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
} 
