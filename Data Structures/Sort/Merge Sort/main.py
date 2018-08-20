def merge_sort(arr, aux, left, right):
    if left >= right:
        return

    mid = left + (right - left) // 2
    merge_sort(arr, aux, left, mid)
    merge_sort(arr, aux, mid + 1, right)

    if arr[mid] > arr[mid + 1]:
        merge(arr, aux, left, mid, right)

def merge(arr, aux, left, mid, right):
    aux[left : right + 1] = arr[left : right + 1]

    l, r = left, mid + 1
    for i in range(left, right + 1):
        if l > mid:
            arr[i] = aux[r]
            r += 1
        elif r > right:
            arr[i] = aux[l]
            l += 1
        elif aux[l] < aux[r]:
            arr[i] = aux[l]
            l += 1
        else:
            arr[i] = aux[r]
            r += 1

def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    merge_sort(arr, [i for i in arr], 0, len(arr) - 1)
    print(arr)

if __name__ == '__main__':
    main()
    
