function bubble_sort(arr) {
    for (let i = 0; i < arr.length - 1; ++i) 
        for (let j = 0; j < arr.length - 1 - i; ++j) 
            if (arr[j] > arr[j + 1])
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]]
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
bubble_sort(arr)
console.log(arr)