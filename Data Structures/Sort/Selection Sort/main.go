package main

import (
	"fmt"
	"math/rand"
	"time"
)

func selectionSort(arr []int) {
	for i := range arr {
		idx := i
		for j := i + 1; j < len(arr); j++ {
			if arr[j] < arr[idx] {
				idx = j
			}
		}
		if idx != i {
			arr[idx], arr[i] = arr[i], arr[idx]
		}
	}
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	selectionSort(arr)
	
	fmt.Println("Sorted array: ", arr)
}

func generateRandomArray(total int, left int, right int) []int { 
	arr := make([]int, total)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < total; i++ {
		arr[i] = rand.Intn(right - left) + left
	}
	return arr
}
