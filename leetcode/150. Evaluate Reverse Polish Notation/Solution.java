/**
 * Created by Inno Fang on 2018/2/3.
 */
class Solution {
    public int evalRPN(String[] tokens) {
        java.util.Stack<Integer> vals = new java.util.Stack<>();
        for (String token : tokens) {
            int v;
            switch (token) {
                case "+":
                    v = vals.pop();
                    vals.push(vals.pop() + v);
                    break;
                case "-":
                    v = vals.pop();
                    vals.push(vals.pop() - v);
                    break;
                case "*":
                    v = vals.pop();
                    vals.push(vals.pop() * v);
                    break;
                case "/":
                    v = vals.pop();
                    vals.push(vals.pop() / v);
                    break;
                default:
                    vals.push(Integer.valueOf(token));
                    break;
            }
        }
        return vals.pop();
    }
}