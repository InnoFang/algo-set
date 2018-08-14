fun selectionSort(list: IntArray) {
    for (i in 0 .. list.lastIndex) {
        var idx = i
        for (j in i+1 .. list.lastIndex) {
            if (list[idx] > list[j]) {
                idx = j
            }
        }
        if (idx != i) {
            (list[idx] to list[i]).run {
                    list[idx] = second
                    list[i] = first 
                }
        }
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    selectionSort(list)

    list.forEach{ print("$it ") }
    println()
}