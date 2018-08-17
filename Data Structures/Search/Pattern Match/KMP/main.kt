fun getNext(pattern: String):IntArray {
    val next = IntArray(pattern.length,  { 0 })
    var index = 0
    var i = 1
    while (i < pattern.length) {
        if (pattern[index] == pattern[i]) {
            next[i] = index + 1
            ++index
            ++i
        }else {
            if (index != 0) index = next[index - 1]
            else {
                next[i] = 0
                ++i
            }
        }
    }
    return next
}

fun getIndex(text: String, pattern: String) : Int {
    var t = 0
    var p = 0 
    val next = getNext(pattern)
    while (t < text.length && p < pattern.length) {
        if (text[t] == pattern[p]) {
            ++t
            ++p
        } else {
            if (p != 0) p = next[p - 1]
            else        ++t
        }
    }
    return if (p == pattern.length)t - p else-1
}

fun hasSubstring(text: String, pattern: String) = getIndex(text, pattern) != -1

fun main(args: Array <String> ) {
    val text = "abcabaaabaabcac"; 
    val pattern = "abaabcac"; 
    println("Does the `text` contain the `pattern`? ${hasSubstring(text , pattern)}")
    println("What's the index that the `pattern` in the `text`? ${getIndex(text, pattern)}")
}