/**
 * 23 / 23 test cases passed.
 * Runtime: 236 ms
 * Memory Usage: 114.1 MB 
 */
class Bank {
public:
    Bank(vector<long long>& balance) : account_(balance) { ; }
    
    bool transfer(int account1, int account2, long long money) {
        if (account1 > account_.size() || account2 > account_.size()) return false;
        if (account_[account1 - 1] < money) return false;
        account_[account1 - 1] -= money;
        account_[account2 - 1] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if (account > account_.size()) return false;
        account_[account - 1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (account > account_.size()) return false;
        if (account_[account - 1] < money) return false;
        account_[account - 1] -= money;
        return true;
    }

private:
    vector<long long> account_;
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
