function merge_sort(arr) {
    if (arr.length < 2)
        return arr
    
    const mid = Math.floor(arr.length / 2)
    let left = arr.slice(0, mid)
    let right = arr.slice(mid)
    return merge(merge_sort(left), merge_sort(right))
}

function merge(left, right) {
    let result = []

    while (left.length > 0 && right.length > 0) {
        if (left[0] < right[0])
            result.push(left.shift())
        else
            result.push(right.shift())
    }

    while (left.length) result.push(left.shift())
    while (right.length) result.push(right.shift())

    return result
}

const arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
console.log(merge_sort(arr))