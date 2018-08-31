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

selection_sort(arr)

console.log("Sorted array:");
console.log(arr); 