import java.util.Random

fun shellSort(arr: IntArray) {
    var gap = arr.size / 2
    while (gap > 0) {
        for (i in gap until arr.size) {
            val tmp = arr[i]
            var j = i
            while (j >= gap && arr[j - gap] > tmp) {
                arr[j] = arr[j - gap]
                j -= gap
            }
            arr[j] = tmp
        }
        gap /= 2
    }
} 

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    shellSort(arr)

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