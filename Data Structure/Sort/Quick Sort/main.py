import random

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
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    quick_sort(arr, 0, len(arr) - 1)

    print('Sorted array:')
    print(arr)

if __name__ == '__main__':
    main()