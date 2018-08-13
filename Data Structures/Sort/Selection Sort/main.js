function selection_sort(arr) {
    for (let i = 0; i < arr.length; ++i) {
        idx = i
        for (let j = i + 1; j < arr.length; ++j) {
            if (arr[idx] > arr[j]) {
                idx = j
            }
        }
        if (idx != i) {
            [arr[idx], arr[i]] = [arr[i], arr[idx]]
        }
    }
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
selection_sort(arr)
console.log(arr)