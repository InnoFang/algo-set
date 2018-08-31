function insertin_sort(arr) {
    for (let i = 1; i < arr.length; ++i) {
        [tmp, j] = [arr[i], i];
        for (; j > 0 && arr[j - 1] > tmp; --j) {
            arr[j] = arr[j - 1];
        }
        arr[j] = tmp;
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

insertin_sort(arr)

console.log("Sorted array:");
console.log(arr)