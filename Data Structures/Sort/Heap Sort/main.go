package main

import (
	"fmt"
	"math/rand"
	"time"
)

func shiftDown(arr []int, heapSize, idx int) {
	for idx * 2 + 1 < heapSize {
		child := idx * 2 + 1
		if child + 1 < heapSize && arr[child] < arr[child + 1] {
			child++
		}
		if arr[idx] >= arr[child] {
			break
		}
		arr[idx], arr[child] = arr[child], arr[idx]
		idx = child
	}
}

func heapSort(arr []int) {
	 for i := len(arr) / 2 - 1; i >= 0; i-- {
		 shiftDown(arr, len(arr), i)
	 }
	 for i := len(arr) - 1; i > 0; i-- {
		 arr[0], arr[i] = arr[i], arr[0]
		 shiftDown(arr, i, 0)
	 }
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	heapSort(arr)
	
	fmt.Println("Sorted array: ", arr)
}

func generateRandomArray(total, left, right int) []int { 
	arr := make([]int, total)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < total; i++ {
		arr[i] = rand.Intn(right - left) + left
	}
	return arr
}
