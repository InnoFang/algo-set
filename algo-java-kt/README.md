# Algorithms

English | [中文](https://github.com/InnoFang/Algorithms/blob/master/README_zh.md)

## _Data Struct and Algorithm Practice_

<details>
<summary>Sort</summary>

+ [Bubble Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/BubbleSort.java)
+ [Selection Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/SelectionSort.java)
+ [Insertion Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/InsertionSort.java)
+ [Shell Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/ShellSort.java)
+ [Quick Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/QuickSort.java)
+ [Merge Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/MergeSort.java)
+ [Example Code](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/SortTest.java)

Sorting the same array(array length is 100,000), and the time complexity of each sorting algorithm is as follows
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

</details>
<br />

<details>
<summary>Search</summary>

+ [Binary Search](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/search/BinarySearch.java)
+ [Example Code](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/SearchTest.java)

</details>
<br />

<details>
<summary>Heap</summary>

+ [Max Heap](https://github.com/innofang/Algorithms/blob/master/src/io/innofang/heap/Heap.java)
+ [Example Code](https://github.com/innofang/Algorithms/blob/master/src/io/innofang/HeapTest.java)

</details>
<br />

<details>
<summary>Graph</summary>

+ nothing, but soon

</details>
<br />

<details>
<summary>BinaryTree</summary>

+ [Binary Search Tree](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/binarytree/BST.java)
+ [Example Code](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/BSTTest.java)


</details>
<br />

<details>
<summary>Other</summary>

+ [Permutation](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/other/Permutation.java) -> [Example Code](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/PermutationTest.java)

</details>
<br />


# [License](https://github.com/InnoFang/Algorithms/blob/master/LICENSE)


    Copyright 2017 InnoFang
  
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at
 
        http://www.apache.org/licenses/LICENSE-2.0
 
    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.