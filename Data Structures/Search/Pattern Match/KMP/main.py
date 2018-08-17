def get_next(pattern):
    next = [0 for i in range(len(pattern))]
    index, i  = 0, 0
    while i < len(pattern):
        if pattern[index] == pattern[i]:
            next[i] = index + 1
            index += 1
            i += 1
        else:
            if not index:
                index = next[index - 1]
            else:
                next[i] = 0
                i += 1

def get_index(text, pattern):
    next = get_next(pattern)
    t, p = 0, 0
    while t < len(text) and p < len(pattern):
        if text[t] == pattern[p]:
            t += 1
            p += 1
        else:
            if not p: p = next[p - 1]
            else:     t += 1
    return t - p if p == len(pattern) else -1

def has_substring(text, pattern):
    return get_index(text, pattern) != -1

def main():
    text = "abcabaaabaabcac"
    pattern = "abaabcac"
    print("Does the `text` contain the `pattern`? " , has_substring(text , pattern))
    print("What's the index that the `pattern` in the `text`? " , get_index(text, pattern))

if __name__ == '__main__':
    main()
    