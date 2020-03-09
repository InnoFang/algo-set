/**
 * Created by Inno Fang on 2017/12/1.
 */

fun isPalindrome(x: Int): Boolean {
    val size = x.toString().length
    val mid = if (size and 1 == 1) size / 2 + 1 else size / 2
    val lef = x.toString().substring(0, mid)
    val rig = x.toString().substring(size / 2, size).reversed()
    return lef == rig
}

fun isPalindrome2(x: Int): Boolean {
    val str = x.toString()
    return (0..str.length / 2).none { index -> str[index] != str[str.length - index - 1] }
}

fun isPalindrome3(x: Int): Boolean {
    return x.toString().reversed() == x.toString()
}

fun main(args: Array<String>) {
    testCase(0, 1, 2, 101, 11, 212, 121, 123321, -123, 312)
}

fun testCase(vararg args: Int) {
    args.forEach { println(isPalindrome3(it)) }
}
