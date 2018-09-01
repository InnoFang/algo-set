import random

def insertion_sort(arr):
    for i in range(len(arr)):
        tmp, j = arr[i], i
        while j > 0 and arr[j - 1] > tmp:
            arr[j] = arr[j - 1]
            j -= 1
        arr[j] = tmp

def main():
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    insertion_sort(arr)

    print('Sorted array:')
    print(arr)

if __name__ == '__main__':
    main()