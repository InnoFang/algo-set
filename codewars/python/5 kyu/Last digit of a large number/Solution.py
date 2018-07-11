def last_digit(n1, n2):
    ans = 1
    while n2 > 0:
        if n2 & 1:
            ans = (ans * n1) % 10
        n2 >>= 1
        n1 = (n1 ** 2) % 10
    return ans