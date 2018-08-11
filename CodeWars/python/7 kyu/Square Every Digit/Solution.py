def square_digits(num):
    return int(''.join(map(lambda x: str(int(x)*int(x)), str(num))))