def get_index(text, pattern):
    t, p = 0, 0
    while t < len(text) and p < len(pattern):
        if text[t] == pattern[p]:
            t += 1
            p += 1
        else:
            t = t - p + 1
            p = 0
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
    