package main

import (
	"fmt"
	"math/rand"
	"time"
)

func partition(arr []int, left, right int) int {
	l, r := left, right
	tmp := arr[l]
	for l != r {
		for l < r && arr[r] >= tmp {
			r--
		}
		for l < r && arr[l] <= tmp {
			l++
		}
		if l < r {
			arr[l], arr[r] = arr[r], arr[l]
		}
	}
	arr[l], arr[left] = arr[left], arr[l]
	return l
}

func quickSort(arr []int, left, right int) {
	if left > right {
		return
	}

	pivot := partition(arr, left, right)
	quickSort(arr, left, pivot - 1)
	quickSort(arr, pivot + 1, right)
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	quickSort(arr, 0, len(arr) - 1)
	
	fmt.Println("Sorted array: ", arr)
}

func generateRandomArray(total int, left, right int) []int { 
	arr := make([]int, total)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < total; i++ {
		arr[i] = rand.Intn(right - left) + left
	}
	return arr
}
