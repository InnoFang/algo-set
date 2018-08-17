fun getIndex(text: String, pattern: String) : Int {
    var t = 0
    var p = 0
    while (t < text.length && p < pattern.length) {
        if (text[t] == pattern[p]) {
            ++t
            ++p
        } else {
            t = t - p + 1
            p = 0
        }
    }
    return if (p == pattern.length) t - p else-1
}

fun hasSubstring(text: String, pattern: String) = getIndex(text, pattern) != -1

fun main(args: Array <String> ) {
    val text = "abcabaaabaabcac"; 
    val pattern = "abaabcac"; 
    println("Does the `text` contain the `pattern`? ${hasSubstring(text , pattern)}")
    println("What's the index that the `pattern` in the `text`? ${getIndex(text, pattern)}")
}