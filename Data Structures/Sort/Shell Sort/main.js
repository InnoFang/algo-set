function shell_sort(arr) {
    let gap = 1;

    while (gap < arr.length / 3) {
        gap = gap * 3 + 1;
    }

    for (; gap > 0; gap = (gap - 1) / 3) {
        for (let i = gap; i < arr.length; i += gap) {
            [tmp, j] = [arr[i], i];
            for (; j > 0 && arr[j - gap] > tmp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = tmp;
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

shell_sort(arr)

console.log("Sorted array:");
console.log(arr); 