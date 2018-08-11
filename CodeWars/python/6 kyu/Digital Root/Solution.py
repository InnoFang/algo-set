from functools import reduce
def digital_root(n):
    if n < 10: return n
    else:
        return digital_root(reduce(lambda x, y: int(x) + int(y), str(n), 0))