function insertin_sort(arr) {
    for (let i = 1; i < arr.length; ++i) {
        [tmp, j] = [arr[i], i] 
        for (; j > 0 && arr[j - 1] > tmp; --j) {
            arr[j] = arr[j - 1];
        }
        arr[j] = tmp;
    }
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
insertin_sort(arr)
console.log(arr)