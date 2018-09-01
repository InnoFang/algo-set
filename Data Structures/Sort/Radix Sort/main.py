import random

def radix_sort(arr):
    RADIX = 10
    digit, dev = 1, 1
    max_digit = max(arr)
    while digit < max_digit:
        buckets = [list() for _ in range( RADIX )]

        for num in arr:
            n = (num // dev) % RADIX
            buckets[n].append(num) 
        
        idx = 0
        for i in range( RADIX ):
            bucket = buckets[i]
            for val in bucket:
                arr[idx] = val
                idx += 1
        
        dev *= 10
        digit *= 10
 

def main():
    num = 20
    range_left = 0
    range_right = 10000

    arr = [random.randint(range_left, range_right) for _ in range(num)]
    
    print('Original array:')
    print(arr)

    radix_sort(arr)

    print('Sorted array:')
    print(arr)


if __name__ == '__main__':
    main()