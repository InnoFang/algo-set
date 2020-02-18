#include <iostream>
#include <ctime>

int partition(int arr[], int left, int right) {
    int l = left, r = right;
    int tmp = arr[l];
    while (l != r) {
        while (l < r && arr[r] >= tmp) --r;
        while (l < r && arr[l] <= tmp) ++l;
        if (l < r) std::swap(arr[l], arr[r]);
    } 
    std::swap(arr[l], arr[left]);
    return l;
}

void quickSort(int arr[], int left, int right) {
    if (left > right) return;
    int pivot = partition(arr, left, right);
    quickSort(arr, left, pivot - 1);
    quickSort(arr, pivot + 1, right);
}

int *generateRandomArray(int length, int rangeFrom, int rangeTo);
void printArray(int * arr, int length);

int main() {

    int length = 20;
    int rangeFrom = 1;
    int rangeTo = 10000;

    int * arr = generateRandomArray(length, rangeFrom, rangeTo); 
 	
    std::cout << "Original array:" << std::endl;
    printArray(arr, length);
 
    quickSort(arr, 0, length - 1);

    std::cout << "Sorted array:" << std::endl;
    printArray(arr, length);

    return 0;
}

/* Randomly generate an array with the `length`, which is from `rangeFrom` to `rangeTo` */
int * generateRandomArray(int length, int rangeFrom, int rangeTo) {
    int * arr = new int[length];
    int range = rangeTo - rangeFrom + 1;
    srand(time(NULL));
    for (int i = 0; i < length; ++i) {
        arr[i] = rand() % range + rangeFrom;
    }
    return arr;
}

/* formatted output array */
void printArray(int * arr, int length) {
    for (int i = 0 ; i < length; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
}