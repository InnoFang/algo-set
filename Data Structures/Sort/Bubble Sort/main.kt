fun bubbleSort(list: IntArray) {
    for (i in 0 until list.lastIndex) {
        for (j in 0 until list.lastIndex - i) {
            if (list[j] > list[j + 1]) {
                (list[j] to list[j + 1]).run {
                    list[j] = second
                    list[j + 1] = first 
                }
            }
        }
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    bubbleSort(list)

    list.forEach{ print("$it ") }
    println()
}