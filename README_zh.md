# Algorithms

[English](https://github.com/InnoFang/Algorithms/blob/master/README.md) | 中文


## _Leetcode Solution_

[Leetcode Solution](https://github.com/InnoFang/Algorithms/tree/master/leetcode/src/main/kotlin/leetcode)



## _数据结构和算法练习_

 + 排序
   - [冒泡排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/BubbleSort.java)
   - [选择排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/SelectionSort.java)
   - [插入排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/InsertionSort.java)
   - [希尔排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/ShellSort.java)
   - [快速排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/QuickSort.java)
   - [归并排序](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/MergeSort.java)

    给相同的数组（数组长度等于100,000）进行排序， 各个排序算法的时间复杂度结果如下
    ```console
    Test for Random Array, size = 100000, random range [0, 100000]
    BubbleSort : 48.446000s
    SelectionSort : 16.273000s
    InsertionSort : 17.110000s
    ShellSort : 0.048000s
    MergeSort : 0.067000s
    QuickSort : 0.070000s

    Test for Nearly Ordered Array, size = 100000, range [0, 100000]
    BubbleSort : 16.588000s
    SelectionSort : 13.123000s
    InsertionSort : 0.005000s
    ShellSort : 0.013000s
    MergeSort : 0.033000s
    QuickSort : 0.010000s
    ```
    [示例代码](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/SortTest.java)

 + 搜索
   
   - [二分查找](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/search/BinarySearch.java)

    [示例代码](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/SearchTest.java)

 + 堆
 
   - [最大堆](https://github.com/innofang/Algorithms/blob/master/src/io/innofang/heap/Heap.java)

    [示例代码](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/HeapTest.java)

 + 图
 
   ...

 + 二叉树
 
   - [二分搜索树](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/binarytree/BST.java)

   [示例代码](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/BSTTest.java)
   
 + 其他

   - [排列](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/other/Permutation.java) -> [示例代码](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/PermutationTest.java)