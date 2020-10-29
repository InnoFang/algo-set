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
 * Status: Accepted
 * Runtime: 8ms
 */
class Solution {
public:

    int dfs( unordered_map<int, Employee*> store, int id ) {
        int ipt = store[id]->importance;
        for ( int& employeeId : store[id]->subordinates ) {
            ipt += dfs( store, employeeId );
        }
        return ipt;
    }

    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> store;
        for ( auto& employee : employees) {
            store[ employee->id ] = employee;
        }
        return dfs( store, id );
    }
};

