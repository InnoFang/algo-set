/**
 * Created by Inno Fang on 2018/2/20.
 */


/**
 * 277 / 277 test cases passed.
 * Status: Accepted
 * Runtime: 292  ms
 */
class Solution {
    val direct = arrayOf(intArrayOf(1, 0), intArrayOf(0, 1), intArrayOf(-1, 0), intArrayOf(0, -1))

    fun floodFill(image: Array<IntArray>, sr: Int, sc: Int, newColor: Int): Array<IntArray> {
        if (image[sr][sc] == newColor) return image
        dfs(image, sr, sc, image[sr][sc], newColor)
        return image
    }

    private fun dfs(image: Array<IntArray>, sr: Int, sc: Int, srcColor: Int, newColor: Int) {

        image[sr][sc] = newColor

        (0 until 4).forEach { i ->
            val newX = sr + direct[i][0]
            val newY = sc + direct[i][1]
            if (newX in (0 until image.size) && newY in (0 until image[0].size) // is in area
                    && image[newX][newY] == srcColor) {
                floodFill(image, newX, newY, newColor)
            }
        }
    }
}

/**
 * 277 / 277 test cases passed.
 * Status: Accepted
 * Runtime: 304 ms
 */
class Solution2 {
    fun floodFill(image: Array<IntArray>, sr: Int, sc: Int, newColor: Int): Array<IntArray> {
        val direct = arrayOf(intArrayOf(1, 0), intArrayOf(0, 1), intArrayOf(-1, 0), intArrayOf(0, -1))
        val srcColor = image[sr][sc]
        fun fill(sr: Int, sc: Int) {
            image[sr][sc] = newColor
            (0 until 4).forEach { i ->
                val newX = sr + direct[i][0]
                val newY = sc + direct[i][1]
                if (newX in (0 until image.size) && newY in (0 until image[0].size) // is in area
                        && image[newX][newY] == srcColor) {
                    floodFill(image, newX, newY, newColor)
                }
            }
        }
        if (srcColor != newColor) fill(sr, sc)
        return image
    }
}

fun main(args: Array<String>) {
    Solution2().floodFill(arrayOf(
            intArrayOf(1, 1, 1),
            intArrayOf(1, 1, 0),
            intArrayOf(1, 0, 1)
    ), 1, 1, 2).forEach(::arrayFormat).let(::newLine)

    Solution2().floodFill(arrayOf(
            intArrayOf(0, 0, 0),
            intArrayOf(0, 1, 1)
    ), 1, 1, 1).forEach(::arrayFormat).let(::newLine)
}

fun arrayFormat(args: IntArray) = args.forEach(::format).let(::newLine)
fun format(args: Any) = print("$args ")
fun newLine(args: Any) = println()