def narcissistic( value ):
    v = str(value)
    return sum(map(lambda x: int(x) ** len(v), v)) == value