fun binarySearch(list: IntArray, target: Int): Int {
    var lo = 0
    var hi = list.lastIndex
    while (lo <= hi) {
        val mid = lo + (hi - lo) / 2
        when (list[mid]) {
            target -> return mid
            else ->
              if (list[mid] > target) hi = mid - 1 else lo = mid + 1
        }
    }
    return -1
}

fun main(args: Array<String>) {
    val list = intArrayOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
    println("Where is number 3? ${binarySearch(list, 3)}")
}