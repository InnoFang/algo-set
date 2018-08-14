fun insertionSort(list: IntArray) {
    for (i in 1..list.lastIndex) {
        var tmp = list[i]
        var j = i
        while (j > 0 && list[j - 1] > tmp) {
            list[j] = list[j - 1]
            --j
        }
        list[j] = tmp
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    insertionSort(list)

    list.forEach{ print("$it ") }
    println()
}