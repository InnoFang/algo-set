import java.util.Random

fun insertionSort(arr: IntArray) {
    for (i in 1..arr.lastIndex) {
        var tmp = arr[i]
        var j = i
        while (j > 0 && arr[j - 1] > tmp) {
            arr[j] = arr[j - 1]
            --j
        }
        arr[j] = tmp
    }
} 

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    insertionSort(arr)

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