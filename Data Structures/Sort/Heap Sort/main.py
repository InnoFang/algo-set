def shiftDown(arr, heap_size, idx):
    while idx * 2 + 1 < heap_size:
        child = idx * 2 + 1
        if child + 1 < heap_size and arr[child] < arr[child + 1]:
            child += 1
        if arr[idx] >= arr[child]:
            break
        arr[idx], arr[child] = arr[child], arr[idx];
        idx = child

def heap_sort(arr):
    for i in range(len(arr) // 2 - 1, -1, -1):
        shiftDown(arr, len(arr), i)
    
    for i in range(len(arr) - 1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]
        shiftDown(arr, i, 0)
        
def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    heap_sort(arr)
    print(arr)

if __name__ == '__main__':
    main()
    