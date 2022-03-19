/**
 * 23 / 23 test cases passed.
 * Runtime: 76 ms
 * Memory Usage: 26.9 MB 
 */
struct Bank {
    balance: Vec<i64>,
}


/**
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl Bank {

    fn new(balance: Vec<i64>) -> Self {
        Self { balance }
    }

    fn exist(&self, account: i32) -> bool {
        1 <= account && account <= self.balance.len() as i32
    }
    
    fn transfer(&mut self, account1: i32, account2: i32, money: i64) -> bool {
        if self.exist(account1) && self.exist(account2) && self.balance[account1 as usize - 1] >= money {
            self.balance[account1 as usize - 1] -= money;
            self.balance[account2 as usize - 1] += money;
            return true;
        }
        false
    }
    
    fn deposit(&mut self, account: i32, money: i64) -> bool {
        if self.exist(account) {
            self.balance[account as usize - 1] += money;
            return true;
        }
        false
    }
    
    fn withdraw(&mut self, account: i32, money: i64) -> bool {
        if self.exist(account) && self.balance[account as usize - 1] >= money { 
            self.balance[account as usize - 1] -= money;
            return true;
        }
        false
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * let obj = Bank::new(balance);
 * let ret_1: bool = obj.transfer(account1, account2, money);
 * let ret_2: bool = obj.deposit(account, money);
 * let ret_3: bool = obj.withdraw(account, money);
 */
