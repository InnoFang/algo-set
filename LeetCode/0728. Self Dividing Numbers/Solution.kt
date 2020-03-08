class Solution {
    fun selfDividingNumbers(left: Int, right: Int): List<Int> {
        return (left..right).filter{ i ->
            var f = true
            for (c in i.toString().toCharArray()){
                if ((c.toInt() - 48) == 0) {
                    f = false
                    break
                }
                if ( (i % (c.toInt() - 48)) != 0 ) {
                    f =  false
                    break
                }
            }
            f
        }.toMutableList()
    }
}

fun main(args: Array<String>) {
   Solution().selfDividingNumbers(1,22).forEach { println(it) }
}
