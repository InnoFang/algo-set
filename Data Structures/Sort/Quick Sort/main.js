function partition(arr, left, right) {
    let l = left, r = right, tmp = arr[left]
    while (l != r) {
        while (l < r && arr[r] >= tmp) --r
        while (l < r && arr[l] <= tmp) ++l
        if (l < r) [arr[r], arr[l]] = [arr[l], arr[r]]
    }
    [arr[l], arr[left]] = [arr[left], arr[l]]
    return l
}

function quick_sort(arr, left, right) {
    if (left > right) return
    const pivot = partition(arr, left, right)
    quick_sort(arr, left, pivot - 1)
    quick_sort(arr, pivot + 1, right)
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
quick_sort(arr, 0, arr.length - 1)
console.log(arr)
