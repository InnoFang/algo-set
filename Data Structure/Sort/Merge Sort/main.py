import random

def merge_sort(arr):
    if len(arr) < 2:
        return arr

    mid = len(arr) // 2
    left, right = arr[:mid], arr[mid:]
    
    return merge(merge_sort(left), merge_sort(right))

def merge(left, right):
    result = []
    
    while len(left) and len(right):
        if left[0] < right[0]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))
    
    if len(left) : result.extend(left)
    if len(right): result.extend(right)

    return result

def main():
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    print('Sorted array:')
    print(merge_sort(arr))

if __name__ == '__main__':
    main()
    
