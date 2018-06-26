def triple_double(num1, num2):
    s1, s2 = str(num1), str(num2)
    for i in '0123456789':
        if i*3 in s1 and i*2 in s2:
            return True
    return False
    