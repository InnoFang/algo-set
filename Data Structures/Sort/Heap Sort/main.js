function shiftDown(arr, len, idx) {
    let left = 2 * idx + 1,
        right = 2 * idx + 2,
        largest = idx;
    
    if (left < len && arr[largest] < arr[left])  {
        largest = left
    }

    if (right < len && arr[largest] < arr[right])  {
        largest = right
    }
    
    if (idx != largest) {
        [arr[idx], arr[largest]] = [arr[largest], arr[idx]]
        shiftDown(arr, len, largest)
    }
}

function heap_sort(arr) {
    for (let i = Math.floor(arr.length / 2); i >= 0; --i) {
        shiftDown(arr, arr.length, i)
    }
  
    
    for (let i = arr.length - 1; i > 0; --i) {
        [arr[0], arr[i]] = [arr[i], arr[0]]
        shiftDown(arr, i, 0)
    }
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
heap_sort(arr)
console.log(arr)