function get_next(pattern) {
    let next = Array(pattern.length)
    next[0] = 0
    let index = 0
    for (let i = 1; i < pattern.length;) {
        if (pattern[index] == pattern[i]) {
            next[i] = index + 1
            ++i
            ++index
        } else {
            if (index != 0) {
                index = next[index - 1]
            } else {
                next[i] = 0
                ++i
            }
        }
    }
    return next
}

function get_index(text, pattern) {
    const next = get_next(pattern) 
    let t = 0, p = 0
    while (t < text.length && p < pattern.length) {
        if (text[t] == pattern[p]) {
            ++t
            ++p
        } else {
            if (p != 0) p = next[p - 1]
            else        ++t 
        }
    }
    return p == pattern.length ? t - p : -1
}

function has_substring(text, pattern) {
    return get_index(text, pattern) != -1
} 

const text = "abcabaaabaabcac"
const pattern = "abaabcac"   
console.log("Does the `text` contain the `pattern`? " + has_substring(text , pattern))
console.log("What's the index that the `pattern` in the `text`? " + get_index(text, pattern))