/**
 * Created by Inno Fang on 2018/2/4.
 */


/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 *
 * 21 / 21 test cases passed.
 * Status: Accepted
 * Runtime: 106 ms
 */
var moveZeroes = function (nums) {
    let zeros = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] != 0) {
            nums[zeros++] = nums[i];
        }
    }
    for (; zeros < nums.length; zeros++) {
        nums[zeros] = 0;
    }
};

arr = [0, 1, 0, 3, 12];
moveZeroes(arr);
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i])
}