#include <iostream>
#include <ctime>

void merge(int arr[], int left, int mid, int right) {
    int * aux = new int[right - left + 1];

    for (int i = left; i <= right; ++i) 
        aux[i - left] = arr[i];

    int l = left, r = mid + 1;
    for (int i = left; i <= right; ++i) {
        if (l > mid) {
            arr[i] = aux[r - left]; 
            ++r;
        } else if (r > right) {
            arr[i] = aux[l - left];
            ++l;
        } else if (aux[l - left] < aux[r - left]) {
            arr[i] = aux[l - left];
            ++l;
        } else {
            arr[i] = aux[r - left];
            ++r;
        }
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // optimization, merge arr when arr is out of order
    if (arr[mid] > arr[mid + 1])
        merge(arr, left, mid, right);
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
 
    mergeSort(arr, 0, length - 1);

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
