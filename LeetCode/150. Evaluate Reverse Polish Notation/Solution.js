/**
 * Created by InnF on 2018/2/3.
 */

/**
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 110 ms
 * @param tokens
 * @returns {*}
 */
var evalRPN = function (tokens) {
    let vals = [];
    for (let t of tokens) {
        let v = Number;
        if (t === '+') {
            v = vals.pop();
            vals.push(vals.pop() + v);
        } else if (t === '-') {
            v = vals.pop();
            vals.push(vals.pop() - v);
        } else if (t === '*') {
            v = vals.pop();
            vals.push(vals.pop() * v);
        } else if (t === '/') {
            v = vals.pop();
            vals.push(parseInt(vals.pop() / v));
        } else {
            vals.push(Number(t));
        }
    }
    return vals.pop();
};

/**
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 102 ms
 * @param tokens
 * @returns {*}
 */
var evalRPN2 = function (tokens) {
    let ops = {
        '+': function (x, y) { return y + x },
        '-': function (x, y) { return y - x },
        '*': function (x, y) { return y * x },
        '/': function (x, y) { return parseInt(y / x) }
    };
    let vals = [];
    for (let t of tokens) {
        if (t in ops) vals.push(ops[t](vals.pop(), vals.pop()));
        else vals.push(Number(t));
    }
    return vals.pop();
};

console.log(evalRPN2(["2", "1", "+", "3", "*"]));
console.log(evalRPN2(["4", "13", "5", "/", "+"]));
console.log(evalRPN2(["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]));