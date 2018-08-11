from functools import reduce
def score(str):
    return reduce(lambda acc, x: acc + x, map(lambda s: ord(s) - 96, str))
def high(x):
    arr = x.split(' ')
    s = list(map(score, arr))   
    return arr[s.index(max(s))]