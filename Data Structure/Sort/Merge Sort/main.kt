import java.util.Random

fun mergeSort(arr: IntArray, aux: IntArray, left: Int, right: Int) {
    if (left >= right) return;

    val mid = left + (right - left) / 2
    mergeSort(arr, aux, left, mid)
    mergeSort(arr, aux, mid + 1, right)

    if (arr[mid] > arr[mid + 1])
        merge(arr, aux, left, mid, right)
}

fun merge(arr: IntArray, aux: IntArray, left: Int, mid: Int, right: Int) {

    System.arraycopy(arr, left, aux, left, right - left + 1)

    var l = left
    var r = mid + 1
    for (i in left .. right) {
        when {
            l > mid -> arr[i] = aux[r++]
            r > right -> arr[i] = aux[l++]
            aux[l] < aux[r] -> arr[i] = aux[l++]
            else -> arr[i] = aux[r++]
        }
    }
} 

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    mergeSort(arr, arr.clone(), 0, arr.lastIndex)

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