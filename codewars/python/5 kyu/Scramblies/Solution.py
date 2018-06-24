def scramble(s1, s2):
    for s in s2:
        if s not in s1:
            return False
    return True
        