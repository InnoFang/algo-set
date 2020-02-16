package main

import (
	"fmt"
	"math/rand"
	"time"
)

func merge(left, right []int) []int {
	aux := make([]int, 0, len(left) + len(right))

	for len(left) > 0 && len(right) > 0 {
		if left[0] < right[0] {
			aux = append(aux,  left[0])
			left = left[1:]
		} else {
			aux = append(aux, right[0])
			right = right[1:]
		}
	}
	if len(left) > 0 {
		aux = append(aux, left...)
	}
	if len(right) > 0 {
		aux = append(aux, right...)
	}
	return aux
}

func mergeSort(arr []int) []int {
	if len(arr) < 2 {
		return arr
	}

	mid := len(arr) / 2
	left, right := arr[:mid], arr[mid:]
	return merge(mergeSort(left), mergeSort(right))
}

func main() {
	total := 20
	left  := 1
	right := 1000
	
	arr := generateRandomArray(total, left, right)

	fmt.Println("Origin array: ", arr)
	 
	arr = mergeSort(arr)
	
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
