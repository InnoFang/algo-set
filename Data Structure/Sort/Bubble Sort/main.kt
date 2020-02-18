import java.util.Random

fun bubbleSort(arr: IntArray) {
    for (i in 0 until arr.lastIndex) {
        for (j in 0 until arr.lastIndex - i) {
            if (arr[j] > arr[j + 1]) {
                (arr[j] to arr[j + 1]).run {
                    arr[j] = second
                    arr[j + 1] = first 
                }
            }
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

    bubbleSort(arr)

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