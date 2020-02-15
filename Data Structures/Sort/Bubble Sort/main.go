package main

import (
	"fmt"
	"math/rand"
	"time"
)

func bubbleSort(arr []int) {
	for i := 0; i < len(arr) - 1; i++ {
		for j := 0; j < len(arr) - 1 - i; j++ {
			if arr[j] > arr[j + 1] {
				arr[j], arr[j + 1] = arr[j + 1], arr[j]
			}
		}
	}
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	
	bubbleSort(arr)
	
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
