def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target: return mid
        elif arr[mid] > target: right = mid - 1
        else: left = mid + 1
    return -1

def main():
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print('Where is number 3? %d' % binary_search(arr, 3))

if __name__ == '__main__':
    main()