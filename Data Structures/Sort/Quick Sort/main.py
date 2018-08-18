def partition(arr, left, right):
    l, r, tmp = left, right, arr[left]
    while l != r:
        while l < r and arr[r] >= tmp: r -= 1
        while l < r and arr[l] <= tmp: l += 1
        arr[l], arr[r] = arr[r], arr[l]
    arr[l], arr[left] = arr[left], arr[l]
    return l

def quick_sort(arr, left, right):
    if left <= right:
        pivot = partition(arr, left, right)
        quick_sort(arr, left, pivot - 1)
        quick_sort(arr, pivot + 1, right)
 
def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    quick_sort(arr, 0, len(arr) - 1)
    print(arr)

if __name__ == '__main__':
    main()