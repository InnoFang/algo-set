#include <iostream>

int binarySearch(int *arr, int target, int len) {
    int lo = 0, hi = len - 1; 
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2; 
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;	
}

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Where is number 3? " << binarySearch(arr, 3, len) << std::endl;
    return 0;
}
