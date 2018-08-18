fun partition(list: IntArray, left: Int, right: Int): Int {
    var l = left
    var r = right
    val tmp = list[left]
    while (l != r) {
        while (l < r && list[r] >= tmp) --r
        while (l < r && list[l] <= tmp) ++l
        if (l < r) {
            (list[l] to list[r]).run { list[l] = second; list[r] = first }
        }
    }
    (list[l] to list[left]).run { list[l] = second; list[left] = first }
    return l
}

fun quickSort(list: IntArray, left: Int, right: Int) {
    if (left > right) return
    val pivot = partition(list, left, right)
    quickSort(list, left, pivot - 1)
    quickSort(list, pivot + 1, right)
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    quickSort(list, 0, list.lastIndex) 

    list.forEach{ print("$it ") }
    println()
}