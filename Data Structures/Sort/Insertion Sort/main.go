package main

import (
	"fmt"
	"math/rand"
	"time"
)

func insertionSort(arr []int) {
	for i := 1; i < len(arr); i++ {
		tmp, j := arr[i], i
		for ; j > 0 && arr[j - 1] > tmp; j-- {
			arr[j] = arr[j - 1]
		}
		arr[j] = tmp
	}
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	insertionSort(arr)
	
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
