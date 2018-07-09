from collections import Counter
def duplicate_encode(word):
    c = Counter(word.lower())
    return ''.join('(' if c[w] == 1 else ')' for w in word.lower())