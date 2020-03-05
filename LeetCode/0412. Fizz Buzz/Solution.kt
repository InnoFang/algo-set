/**
 * Created by Inno Fang on 2017/12/12.
 */
class Solution {
    fun fizzBuzz(n: Int): List<String> {
        val list = mutableListOf<String>()
        (1..n).forEach {
            when {
                it % 15 == 0 -> list.add("FizzBuzz")
                it % 3 == 0 -> list.add("Fizz")
                it % 5 == 0 -> list.add("Buzz")
                else -> list.add("$it")
            }
        }
        return list
    }
}

class Solution2 {
    fun fizzBuzz(n: Int): List<String> {
        return (1..n).map {
            when {
                it % 15 == 0 -> "FizzBuzz"
                it % 3 == 0 -> "Fizz"
                it % 5 == 0 -> "Buzz"
                else -> it.toString()
            }
        }
    }
}

fun main(args: Array<String>) {
    Solution2().fizzBuzz(15).let(::println)
}