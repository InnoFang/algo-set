function partition(arr, left, right) {
    let l = left, r = right, tmp = arr[left];
    while (l != r) {
        while (l < r && arr[r] >= tmp) --r;
        while (l < r && arr[l] <= tmp) ++l;
        if (l < r) [arr[r], arr[l]] = [arr[l], arr[r]];
    }
    [arr[l], arr[left]] = [arr[left], arr[l]];
    return l;
}

function quick_sort(arr, left, right) {
    if (left > right) return;
    const pivot = partition(arr, left, right);
    quick_sort(arr, left, pivot - 1);
    quick_sort(arr, pivot + 1, right);
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

quick_sort(arr, 0, arr.length - 1)

console.log("Sorted array:");
console.log(arr); 