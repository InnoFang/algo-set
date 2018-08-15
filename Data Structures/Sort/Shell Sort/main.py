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
    arr = [5, 7, 3, 9, 2, 0, 1, 8, 6, 4]
    shell_sort(arr)
    print(arr)

if __name__ == '__main__':
    main()
