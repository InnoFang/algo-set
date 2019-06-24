## Fast Power (快速幂)

### Iteration (迭代方式)

```cpp 
typedef long long ll;
// iteration for a ^ b % m
ll fastPower(ll a, ll b, ll m) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return ans;
}
```

### Recursion (递归方式)

```cpp
typedef long long ll;
// recursion for a ^ b % m
ll fastPower(ll a, ll b, ll m) {
    if (b == 0) return 1;   // when b == 0, a ^ 0 = 1, return 1
    // if b is odd, convert it into b - 1
    if (b & 1) return a * binaryPow(a, b - 1, m) % m;
    else  { // if b is even, convert it into b / 2
        ll mul = binaryPow(a, b / 2, m);
        return mul * mul % m;
    }
}
```
