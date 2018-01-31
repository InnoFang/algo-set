# 268. Missing Number

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

Given an array containing _n_ distinct numbers from `0, 1, 2, ..., n`, find the one that is missing from the array.

## Example 1

> **Input:**: [3, 0, 1]
> **Output:**: 2


## Example 2

> **Input:**: [9,6,4,2,3,5,7,0,1]
> **Output:**: 8

## Note:

Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?


## IDEA

看完题目后，我首先想到的是用一个类似于桶排序的结构，把参数中的值放到对应新数组的对应位置，哪个位置没有值，那么哪个位置就是我们要找的结果。但是这样就开了一个新的空间。

所以，既然题目描述中是 `0, 1, 2, ..., n` 只是缺失了一个数并且数字排列是乱序的，那么对这个 n 长的数组来说，如果没有缺失数的话，最终数组内的数字和应该是 ( N + 1 ) * N / 2 ，那么如果有缺失的话，那么这个数组的和就是不缺数的情况下减去缺失的值。
那么，反过来思考，用不缺数的总和减去数组中的所有数，那么剩下的值就是我们要找的那个结果。