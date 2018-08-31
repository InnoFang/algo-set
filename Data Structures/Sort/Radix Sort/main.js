
function radix_sort(arr, maxDigit) {
    const counter = [];
    for (let i = 1, dev = 1; i < maxDigit; i *= 10, dev *= 10) {
        for (let j = 0; j < arr.length; ++j) {
            const bucket = parseInt(arr[j] / dev) % 10;
            if (counter[bucket] == null) {
                counter[bucket] = [];
            }
            counter[bucket].push(arr[j]);
        }
        let index = 0;
        for (let j = 0; j < counter.length; ++j) {
            let value = null;
            if (counter[j] != null) {
                while ((value = counter[j].shift()) != null) {
                    arr[index++] = value;
                }
            }
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

radix_sort(arr, rangeTo);

console.log("Sorted array:");
console.log(arr);