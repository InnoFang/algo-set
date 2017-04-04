# Algorithms

[English](https://github.com/InnoFang/Algorithms/blob/master/README.md) | 中文

这个项目是数据结构和算法的实践。 为了完成一个可重用的，支持基本数据类型和引用数据类型的算法库，在这个库中也将使用设计模式进行封装。你可以将该库生成jar文件中，并将这个jar文件添加到你的项目中，这样你就可以利用已实现的算法去实现自己想要的功能。

## _项目进度_

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

 + 堆
 
   ...

 + 图
 
   ...

 + 二叉树
 
   ...
   
