/**
 * 23 / 23 test cases passed.
 * Runtime: 444 ms
 * Memory Usage: 33.2 MB 
 */
 type Bank struct {
    balance []int64
}


func Constructor(balance []int64) Bank {
    return Bank { balance }
}

func (this *Bank) exist(account int) bool {
    return 1 <= account && account <= len(this.balance)
}


func (this *Bank) Transfer(account1 int, account2 int, money int64) bool {
    if this.exist(account1) && this.exist(account2) && this.balance[account1 - 1] >= money {
        this.balance[account1 - 1] -= money
        this.balance[account2 - 1] += money
        return true
    }
    return false
}


func (this *Bank) Deposit(account int, money int64) bool {
    if this.exist(account) {
        this.balance[account - 1] += money;
        return true;
    }
    return false;
}


func (this *Bank) Withdraw(account int, money int64) bool {
    if this.exist(account) && this.balance[account - 1] >= money {
        this.balance[account - 1] -= money;
        return true;
    }
    return false;
}


/**
 * Your Bank object will be instantiated and called as such:
 * obj := Constructor(balance);
 * param_1 := obj.Transfer(account1,account2,money);
 * param_2 := obj.Deposit(account,money);
 * param_3 := obj.Withdraw(account,money);
 */
