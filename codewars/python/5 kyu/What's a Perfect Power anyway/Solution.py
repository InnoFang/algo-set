import math

def isPP(n):
    k = int(math.sqrt(n))
    for i in range(k - 1):
        m = math.log(n) / math.log(k - i)
        if abs(m - round(m)) < 1e-10:
            return [k - i, round(m)]
    return None