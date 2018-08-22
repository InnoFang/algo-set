fun shiftDown(list: IntArray, len: Int, idx: Int) {
    val left = idx * 2 + 1
    val right = idx * 2 + 2
    var largest = idx

    if (left < len && list[largest] < list[left]) largest = left
    if (right < len && list[largest] < list[right]) largest = right

    if (idx != largest) {
        (list[idx] to list[largest]).run{ list[idx] = second; list[largest] = first }
        shiftDown(list, len, largest)
    }
}

fun heapSort(list: IntArray) {
    for (i in list.size / 2 - 1 downTo 0) {
        shiftDown(list, list.size, i)
    }

    for (i in list.lastIndex downTo 1) {
        (list[i] to list[0]).run{ list[i] = second; list[0] = first }
        shiftDown(list, i, 0)
    }
}

fun main(args: Array<String>) {
    val list = intArrayOf(5, 7, 3, 9, 2, 0, 1, 8, 6, 4)

    heapSort(list)

    list.forEach{ print("$it ") }
    println()
}