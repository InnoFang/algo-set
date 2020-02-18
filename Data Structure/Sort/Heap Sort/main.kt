import java.util.Random

fun shiftDown(arr: IntArray, len: Int, idx: Int) {
    val left = idx * 2 + 1
    val right = idx * 2 + 2
    var largest = idx

    if (left < len && arr[largest] < arr[left]) largest = left
    if (right < len && arr[largest] < arr[right]) largest = right

    if (idx != largest) {
        (arr[idx] to arr[largest]).run{ arr[idx] = second; arr[largest] = first }
        shiftDown(arr, len, largest)
    }
}

fun heapSort(arr: IntArray) {
    for (i in arr.size / 2 - 1 downTo 0) {
        shiftDown(arr, arr.size, i)
    }

    for (i in arr.lastIndex downTo 1) {
        (arr[i] to arr[0]).run{ arr[i] = second; arr[0] = first }
        shiftDown(arr, i, 0)
    }
} 

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    heapSort(arr)

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