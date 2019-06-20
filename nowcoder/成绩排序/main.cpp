#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Student {
    Student(int i, string n, int s) : id(i), name(n), score(s) {};
    int id;
    string name;
    int score;
};

bool descend(const Student &s1, const Student &s2) {
    return s1.score == s2.score ? s1.id <s2.id : s1.score > s2.score;
}

bool ascend(const Student &s1, const Student &s2) {
    return s1.score == s2.score ? s1.id <s2.id : s1.score < s2.score;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    bool (*order[])(const Student &s1, const Student &s2){
        descend,
        ascend
    };
    int num, orderIdx;
    while (cin >> num) {
        cin >> orderIdx;
        vector<Student> list;
        for (int i = 0; i < num; ++ i) {
            string name;
            int score;
            cin >> name >> score;
            list.push_back(Student(i, name, score));
        }
        sort(list.begin(), list.end(), order[orderIdx]);
        for (auto student: list) {
            cout << student.name << " " << student.score << endl;
        }
    }
    

    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}