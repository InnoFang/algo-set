/**
 * 29 / 29 test cases passed
 * Status: Accepted
 * Runtime: 64 ms
 * 
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let store = []
    let len = nums.length
    for (let i = 0; i < len; i++) {
        let diff = target - nums[i]
        if (store[diff] !== undefined) {
            return [store[diff], i]
        }
        store[nums[i]] = i
    }
};
