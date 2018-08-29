#include <iostream>
#include <ctime>

void selectionSort(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        int idx = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[idx] > arr[j]) {
                idx = j;
            }
        }
        if (idx != i) 
            std::swap(arr[idx], arr[i]);
    }      
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

    selectionSort(arr, length);

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
