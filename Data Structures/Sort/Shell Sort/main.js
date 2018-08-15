function shell_sort(arr) {
    let gap = 1;

    while (gap < arr.length / 3) {
        gap = gap * 3 + 1
    }

    for (; gap > 0; gap = (gap - 1) / 3) {
        for (let i = gap; i < arr.length; i += gap) {
            [tmp, j] = [arr[i], i]
            for (; j > 0 && arr[j - gap] > tmp; j -= gap) {
                arr[j] = arr[j - gap]
            }
            arr[j] = tmp
        }
    }
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
shell_sort(arr)
console.log(arr)