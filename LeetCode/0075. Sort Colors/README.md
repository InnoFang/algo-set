# [75. Sort Colors](https://leetcode.com/problems/sort-colors/description/)


![](https://img.shields.io/badge/Difficulty-Medium-F8AF40.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Two Pointers`](https://leetcode.com/tag/two-pointers/)
* [`Sort`](https://leetcode.com/tag/sort)

</details>
<br />

Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

**Note:**

You are not suppose to use the library's sort function for this problem.


## Solution

该题的大意是：给定一个标记有红色，白色和蓝色的数组，分别用 0，1，2 表示红，白和蓝，我们要做的就是
对这个数组进行排序，使得相同颜色要相邻，换句话说就是对这个只有 0，1，2 的数组进行排序。

**解题思路：**

**1.** 使用计数排序的方式。 &nbsp;&nbsp;&nbsp; **时间复杂度 O(m+n)**

遍历数组并使用 3 个变量保存各个数字出现的个数。然后再将对应个数的数字重新填回原数组 <br />
简单 Java 思路如下（未测试）
```java
public void sortColors(int[] nums) {
    int num0 = 0, num1 = 0, num2 = 0, n = nums.length;

    for(int i = 0; i < n; i++) {
        if (nums[i] == 0) ++num0;
        else if (nums[i] == 1) ++num1;
        else if (nums[i] == 2) ++num2;
    }

    for(int i = 0; i < num0; ++i) nums[i] = 0;
    for(int i = 0; i < num1; ++i) nums[num0+i] = 1;
    for(int i = 0; i < num2; ++i) nums[num0+num1+i] = 2;
}
```

<br />

**2.** 使用 3 路快排的方式 &nbsp;&nbsp;&nbsp; **时间复杂度 O(n)**

因为数据类型很少，只有 0，1，2 这三种数字，因此该数组就属于一种含有大量重复元素的数组 <br />
因此使用 3 路快排的方式对数组进行 partition 也是一种解题思路 <br />

对一个数组进行排序，大致如下所示，（？表示还没遍历到的数）

        _______________________________
        |0|0|0|0|1|1|1|1|?|?|?|?|2|2|2|
        -------------------------------
               ^         ^       ^
             zeros      ones    twos

我们使用 3 个变量来对数组进行分界，其中 zeros 标定 0 的分界，twos 标定 2 的分界，ones 表示**当前元素**，所以有如下范围解释：

  + `[0, zeros]` 范围内是 0
  + `[twos, nums.length)` 范围内是 2
  + `(zeros, ones)` 范围内是 1
  + `[ones, twos)` 范围内是未遍历到的数

因此当取得一个数 ？时

 + 如果 ？是 0，则

   - `nums[ones]` 和 `nums[zeros+1]` 进行交换
   - `ones` 加一 ; `zeros`加一

 + 如果 ？是 1，则

   - `ones` 加一

 + 如果 ？是 2，则

   - `nums[ones]` 和 `nums[twos-1]` 进行交换
   - `ones` 加一 ; `twos`减一

循环终止条件为，`ones < twos`

参考 kotlin 代码如下
```kotlin
    fun sortColors(nums: IntArray): Unit {
        var zeros = -1
        var ones = 0
        var twos = nums.size
        while (ones < twos) {
            when (nums[ones]) {
                0 -> {
                    val temp = nums[++zeros]
                    nums[zeros] = nums[ones]
                    nums[ones] = temp
                    ones++
                }
                1 -> ones++
                2 -> {
                    val temp = nums[--twos]
                    nums[twos] = nums[ones]
                    nums[ones] = temp
                }
            }
        }
    }
```

<br />

**3.** 执行如图 &nbsp;&nbsp;&nbsp; **时间复杂度 O(n)**

        _______________________________
        |0|0|0|0|1|1|1|1|2|2|2|?|?|?|?|
        -------------------------------
                 ^       ^     ^
               zeros    ones  curr


同样是使用分组的方式，该法思路如下

当遍历到一个数时

 + 先取得原值，并假定当前值为 2，即 `nums[curr]` 为 2

        _______________________________
        |0|0|0|0|1|1|1|1|2|2|2|2|?|?|?|
        -------------------------------
                 ^       ^     ^
               zeros    ones  curr

 + 若原值不为 2，则原值小于 2，可能为 1 或 0，先假定原值为 1，并使 `nums[ones]` = 1

        _______________________________
        |0|0|0|0|1|1|1|1|1|2|2|2|?|?|?|
        -------------------------------
                 ^       ^     ^
               zeros    ones  curr

 + 若原值不为 1，则原值 0，并使 `nums[zeros]` = 0

        _______________________________
        |0|0|0|0|0|1|1|1|1|2|2|2|?|?|?|
        -------------------------------
                 ^       ^     ^
               zeros    ones  curr


一轮操作完毕，下一轮开始时 curr 加一

该法不用交换，较灵活，参考 python 代码如下

```python
 def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        -----------------------------------------
        86 / 86 test cases passed.
        Status: Accepted
        Runtime: 59 ms
        """
        zeros = ones = 0
        for curr in range(len(nums)):
            val = nums[curr]
            nums[curr] = 2
            if val < 2:
                nums[ones] = 1
                ones += 1
            if val == 0:
                nums[zeros] = 0
                zeros += 1
```