class Solution {
    fun intersect(nums1: IntArray, nums2: IntArray): IntArray {
        val map = HashMap<Int, Int>()
        nums1.forEach {
            if (!map.containsKey(it))
                map.put(it, 1)
            else
                map[it] = map[it]!! + 1
        }

        val result = ArrayList<Int>()
        nums2.forEach {
            if (map.containsKey(it) && map[it]!! > 0) {
                map[it] = map[it]!! - 1
                result.add(it)
            }
        }
        return result.toIntArray()
    }
}

fun main(args: Array<String>) {
    Solution().intersect(intArrayOf(1,2,2,1), intArrayOf(2,2)).forEach { print("$it ") }; println()
}
