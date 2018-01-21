package solution._027_Remove_Element

/**
 * Created by Inno Fang on 2018/1/21.
 */
class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
        var size = 0
        nums.indices.forEach {
            if (nums[it] != `val`) {
                nums[size++] = nums[it]
            }
        }
        return size
    }
}