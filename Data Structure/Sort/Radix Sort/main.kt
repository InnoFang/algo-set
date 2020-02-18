import java.util.Random


fun radixSort(arr: IntArray) {
    val bucket = Array(10) { IntArray(arr.size) }
    val cnt = IntArray(10) { 0 }

    val maxDigit = arr.max() ?: 0
    var digit = 1
    while (digit < maxDigit) {

        for (num in arr) {
            val d = (num / digit) % 10
            bucket[d][cnt[d]] = num
            cnt[d] += 1
        }

        var index = 0
        for (i in 0 until 10) {
            if (cnt[i] != 0) {
                for (j in 0 until cnt[i]) {
                    arr[index++] = bucket[i][j]
                }
            }
            cnt[i] = 0
        }
        digit *= 10
    }

}

fun main(args: Array<String>) {
    val num = 20
    val rangeLeft = 0
    val rangeRight = 10000

    val arr = generateRandomArray(num, rangeLeft, rangeRight)

    println("Original array:")
    printIntArray(arr)

    radixSort(arr)

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