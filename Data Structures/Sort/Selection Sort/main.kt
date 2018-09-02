import java.util.Random

fun selectionSort(arr: IntArray) {
    for (i in 0 .. arr.lastIndex) {
        var idx = i
        for (j in i+1 .. arr.lastIndex) {
            if (arr[idx] > arr[j]) {
                idx = j
            }
        }
        if (idx != i) {
            (arr[idx] to arr[i]).run {
                    arr[idx] = second
                    arr[i] = first 
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

    selectionSort(arr)

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