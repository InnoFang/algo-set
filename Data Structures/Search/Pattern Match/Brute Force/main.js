function get_index(text, pattern) {
    let [t, p] = [0, 0]
    while (t < text.length && p < pattern.length) {
        if (text[t] == pattern[p]) {
            ++t
            ++p
        } else {
            t = t - p + 1
            p = 0
        }
    }
    return p == pattern.length ? t - p : -1
}

function has_substring(text, pattern) {
    return get_index != -1
} 

const text = "abcabaaabaabcac"
const pattern = "abaabcac"   
console.log("Does the `text` contain the `pattern`? " + has_substring(text , pattern))
console.log("What's the index that the `pattern` in the `text`? " + get_index(text, pattern))