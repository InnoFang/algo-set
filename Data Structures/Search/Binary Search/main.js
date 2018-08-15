function binary_search(arr, target) {
    let left = 0, right = arr.length
    while (left <= right) {
        const mid = left + (right - left) / 2
        if (arr[mid] == target) return mid
        else if (arr[mid] > mid) right = mid - 1
        else left = mid + 1
    }
    return -1
}

const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
console.log("Where is number 3? " + binary_search(arr, 3))
