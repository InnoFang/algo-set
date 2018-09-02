import java.util.Random

fun partition(arr: IntArray, left: Int, right: Int): Int {
    var l = left
    var r = right
    val tmp = arr[left]
    while (l != r) {
        while (l < r && arr[r] >= tmp) --r
        while (l < r && arr[l] <= tmp) ++l
        if (l < r) {
            (arr[l] to arr[r]).run { arr[l] = second; arr[r] = first }
        }
    }
    (arr[l] to arr[left]).run { arr[l] = second; arr[left] = first }
    return l
}

fun quickSort(arr: IntArray, left: Int, right: Int) {
    if (left > right) return
    val pivot = partition(arr, left, right)
    quickSort(arr, left, pivot - 1)
    quickSort(arr, pivot + 1, right)
} 

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    quickSort(arr, 0, arr.lastIndex) 

    println("Sorted array:")
    printIntArray(arr)
}

fun generateRandomArray(num: Int, rangeLeft: Int, rangeRight: Int): IntArray {
    val range = rangeRight - rangeLeft
    val arr = IntArray(num)
    val ran = Random()
    for (i in 0 until num) {
        arr[i] = ran.nextInt(range) + rangeLeft
    }
    return arr
}

fun printIntArray(arr: IntArray) {
    for (t in arr) {
        print("$t ")
    }
    println()
}