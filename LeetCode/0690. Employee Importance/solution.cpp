/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

/**
 * 108 / 108 test cases passed
 * Runtime: 32 ms
 * Memory Usage: 13.6 MB 
 */
class Solution {
public:
    int dfs( unordered_map<int, Employee*>& store, int id ) {
        int ipt = store[id]->importance;
        for ( int& employeeId : store[id]->subordinates ) {
            ipt += dfs( store, employeeId );
        }
        return ipt;
    }

    int getImportance(vector<Employee*>& employees, int id) {
        unordered_map<int, Employee*> store;
        for ( auto& employee : employees) {
            store[ employee->id ] = employee;
        }
        return dfs( store, id );
    }
};

/**
 * 108 / 108 test cases passed
 * Runtime: 36 ms
 * Memory Usage: 13.7 MB 
 */
class Solution2 {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> store;
        for (auto& employee: employees) {
            store[employee->id] = employee;
        }

        int ans = 0;
        queue<Employee*> que;
        que.push(store[id]);
        while (!que.empty()) {
            vector<int> subordinates = que.front()->subordinates;
            ans += que.front()->importance;
            que.pop();
            for (auto& subId: subordinates) {
                que.push(store[subId]);
            }
        }
        return ans;
    }
};
