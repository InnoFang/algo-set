def selection_sort(arr):
    for i in range(len(arr)):
        idx = i
        for j in range(i + 1, len(arr)):
            if arr[idx] > arr[j]:
                idx = j
        if idx != i:
            arr[idx], arr[i] = arr[i], arr[idx]

def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    selection_sort(arr)
    print(arr)

if __name__ == '__main__':
    main()
    