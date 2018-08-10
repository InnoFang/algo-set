def bubble_sort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j] 

def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    bubble_sort(arr)
    print(arr)

if __name__ == '__main__':
    main()
    