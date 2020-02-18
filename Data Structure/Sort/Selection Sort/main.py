import random

def selection_sort(arr):
    for i in range(len(arr)):
        idx = i
        for j in range(i + 1, len(arr)):
            if arr[idx] > arr[j]:
                idx = j
        if idx != i:
            arr[idx], arr[i] = arr[i], arr[idx]

def main():
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    selection_sort(arr)

    print('Sorted array:')
    print(arr)

if __name__ == '__main__':
    main()
    