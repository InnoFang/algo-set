fun mergeSort(list: IntArray, aux: IntArray, left: Int, right: Int) {
    if (left >= right) return;

    val mid = left + (right - left) / 2
    mergeSort(list, aux, left, mid)
    mergeSort(list, aux, mid + 1, right)

    if (list[mid] > list[mid + 1])
        merge(list, aux, left, mid, right)
}

fun merge(list: IntArray, aux: IntArray, left: Int, mid: Int, right: Int) {

    System.arraycopy(list, left, aux, left, right - left + 1)

    var l = left
    var r = mid + 1
    for (i in left .. right) {
        when {
            l > mid -> list[i] = aux[r++]
            r > right -> list[i] = aux[l++]
            aux[l] < aux[r] -> list[i] = aux[l++]
            else -> list[i] = aux[r++]
        }
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    mergeSort(list, list.clone(), 0, list.lastIndex)

    list.forEach{ print("$it ") }
    println()
}