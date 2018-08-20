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
    
    while len(left): result.append(left.pop(0))
    while len(right):result.append(right.pop(0))

    return result


def main():
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4] 
    print(merge_sort(arr))

if __name__ == '__main__':
    main()
    
