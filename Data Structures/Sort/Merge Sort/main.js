function merge_sort(arr) {
    if (arr.length < 2)
        return arr
    
    const mid = Math.floor(arr.length / 2)
    let left = arr.slice(0, mid)
    let right = arr.slice(mid)
    return merge(merge_sort(left), merge_sort(right))
}

function merge(left, right) {
    let result = [];

    while (left.length > 0 && right.length > 0) {
        if (left[0] < right[0])
            result.push(left.shift());
        else
            result.push(right.shift());
    }

    while (left.length) result.push(left.shift());
    while (right.length) result.push(right.shift());

    return result;
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

console.log("Sorted array:");
console.log(merge_sort(arr));