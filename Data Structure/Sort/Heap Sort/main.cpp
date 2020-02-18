#include <iostream>
#include <ctime>

void shiftDown(int arr[], int len, int idx) {
    while ((idx * 2 + 1) < len) {
        int child = idx * 2 + 1; 
        /* if idx's children are exist and the right side child is greater than the left one, change the child. */
        if (child + 1 < len && arr[child] < arr[child + 1]) ++child;
        /* if parent's value equals or greater than the child's, meet the definition of the maximum heap and break */
        if (arr[idx] >= arr[child]) break;
        /* if not, swap two values */
        std::swap(arr[idx], arr[child]);
        idx = child;
    }
}

void heapSort(int arr[], int len) { 

    for (int i = len / 2 - 1; i >= 0; --i) {
        shiftDown(arr, len, i);
    }
	
	for (int i = len - 1; i > 0; --i) {
		std::swap(arr[0], arr[i]);
		shiftDown(arr, i, 0);
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

    heapSort(arr, length);

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
