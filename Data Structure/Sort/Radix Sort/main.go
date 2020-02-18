package main

import (
	"fmt"
	"math/rand"
	"time"
)

func radixSort(arr []int, limit int) {
	buckets := make([][]int, 10)
	for digit := 1; digit < limit; digit *= 10 {
		for i := range buckets {
			buckets[i] = make([]int, 0, len(arr))
		}
		for _, num := range arr {
			d := (num / digit) % 10
			buckets[d] = append(buckets[d], num) 
		}

		for i, idx := 0, 0; i < 10; i++ {
			for _, val := range buckets[i] {
				arr[idx] = val
				idx++
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
	 
	radixSort(arr, right)
	
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
