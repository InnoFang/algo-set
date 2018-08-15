fun shellSort(list: IntArray) {
    var gap = list.size / 2
    while (gap > 0) {
        for (i in gap until list.size) {
            val tmp = list[i]
            var j = i
            while (j >= gap && list[j - gap] > tmp) {
                list[j] = list[j - gap]
                j -= gap
            }
            list[j] = tmp
        }
        gap /= 2
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    shellSort(list)

    list.forEach{ print("$it ") }
    println()
}