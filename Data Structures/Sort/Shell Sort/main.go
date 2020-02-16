package main

import (
	"fmt"
	"math/rand"
	"time"
)

func shellSort(arr []int) {
	gap := 1
	
	for gap < len(arr) / 3 {
		gap = gap * 3 + 1
	}

	for ; gap > 0; gap = (gap - 1) / 3 {
		for i := gap; i < len(arr); i += gap {
			tmp, j := arr[i], i
			for ; j > 0 && arr[j - gap] > tmp; j -= gap {
				arr[j] = arr[j - gap]
			}
			arr[j] = tmp
		}
	}
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	shellSort(arr)
	
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
