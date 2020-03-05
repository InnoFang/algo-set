/**
 * Created by InnF on 2018/2/5.
 */

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function (nums) {
    let zeros = 0, ones = 0;
    for (let i = 0; i < nums.length; i++) {
        const val = nums[i];
        nums[i] = 2;
        if (val < 2) {
            nums[ones] = 1;
            ones++;
        }
        if (val == 0) {
            nums[zeros] = 0;
            zeros++;
        }
    }
};


var arr = [1, 0, 2, 0, 2, 1, 1, 0, 0, 2, 2, 0, 2, 1, 0, 2, 1];
sortColors(arr);
console.log(arr);

arr = [0, 0, 0, 0, 0, 0, 0, 0, 0];
sortColors(arr);
console.log(arr);

arr = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1];
sortColors(arr);
console.log(arr);

arr = [2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2];
sortColors(arr);
console.log(arr);

arr = [];
sortColors(arr);
console.log(arr);