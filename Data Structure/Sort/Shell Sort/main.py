import random

def shell_sort(arr):
    # Marcin Ciura's gap sequence
    gaps = [1750, 701, 301, 132, 57, 23, 10, 4, 1]

    for gap in gaps: 
        for i in range(gap, len(arr)):
            tmp, j = arr[i], i
            while j > 0 and arr[j - gap] > tmp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = tmp

def main():
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    shell_sort(arr)

    print('Sorted array:')
    print(arr)

if __name__ == '__main__':
    main()
