def accum(s):
    res = ''
    for idx, c in enumerate(s):
        if idx:
            res += '-'
        res += c.upper() + c.lower()*idx
    return res