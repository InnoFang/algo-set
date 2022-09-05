/**
 * 42 / 42 test cases passed.
 * Runtime: 45 ms
 * Memory Usage: 43.3 MB 
 */
class Solution {
    private double get(int[] nums) {
        int sz = nums.length;
        return (nums[(sz - 1) / 2] * 1.0 / 2) + (nums[sz / 2] * 1.0 / 2);
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    } 

    public double[] medianSlidingWindow(int[] nums, int k) {
        int[] slide = Arrays.copyOfRange(nums, 0, k);
        Arrays.sort(slide);

        int n = nums.length;
        double[] ans = new double[n - k + 1];
        ans[0] = get(slide);
        for (int i = 0; i < n - k; i++) {
            int index = Arrays.binarySearch(slide, nums[i]);
            slide[index] = nums[i + k];
            while (index < slide.length - 1 && slide[index] > slide[index + 1]) {
                swap(slide, index, index + 1);
                index++;
            }
            while (index > 0 && slide[index] < slide[index - 1]) {
                swap(slide, index, index - 1);
                index--;
            }
            ans[i + 1] = get(slide);
        }
        return ans;
    }
}
