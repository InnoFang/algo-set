function shiftDown(arr, len, idx) {
    let left = 2 * idx + 1,
        right = 2 * idx + 2,
        largest = idx;
    
    if (left < len && arr[largest] < arr[left])  {
        largest = left;
    }

    if (right < len && arr[largest] < arr[right])  {
        largest = right;
    }
    
    if (idx != largest) {
        [arr[idx], arr[largest]] = [arr[largest], arr[idx]];
        shiftDown(arr, len, largest);
    }
}

function heap_sort(arr) {
    for (let i = Math.floor(arr.length / 2); i >= 0; --i) {
        shiftDown(arr, arr.length, i);
    }
  
    
    for (let i = arr.length - 1; i > 0; --i) {
        [arr[0], arr[i]] = [arr[i], arr[0]];
        shiftDown(arr, i, 0);
    }
} 

function generateRandomArray(num, rangeFrom, rangeTo) {
    if (rangeTo < rangeFrom) {
        return;
    }

    const arr = new Array(num);
    const range = rangeTo - rangeFrom + 1;
    for (let i = 0; i < num; ++i) {
        arr[i] = Math.floor(Math.random() * range + rangeFrom);
    }
    return arr;
}

const num = 20;
const rangeFrom = 1;
const rangeTo = 10000;
const arr = generateRandomArray(20, 1, 1000)

console.log("Original array:");
console.log(arr);

heap_sort(arr);

console.log("Sorted array:");
console.log(arr)