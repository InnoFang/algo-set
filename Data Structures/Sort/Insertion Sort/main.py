def insertion_sort(arr):
    for i in range(len(arr)):
        tmp, j = arr[i], i
        while j > 0 and arr[j - 1] > tmp:
            arr[j] = arr[j - 1]
            j -= 1
        arr[j] = tmp

def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    insertion_sort(arr)
    print(arr)

if __name__ == '__main__':
    main()