#include <iostream>
#include <ctime>

void insertionSort(int *arr, int len) {
    for (int i = 1; i < len; ++i) {
        int tmp = arr[i];
        int j;	// save the location where `tmp` should be inserted.
        for (j = i; j > 0 && arr[j - 1] > tmp; --j) {
            arr[j] = arr[j - 1];
        }
        arr[j] = tmp;
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

    insertionSort(arr, length);

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
