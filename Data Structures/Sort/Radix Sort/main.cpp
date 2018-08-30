#include <iostream>
#include <ctime>
#include <queue> 

void radixSort(int * arr, int len, int maxDigit) { 
    std::queue<int> counter[10];    /* Counter consist of ten queues that store the number of the corresponding digit. */
 
    for (int i = 1, mode = 10, dev = 1; i < maxDigit; i *= 10, mode *= 10, dev *= 10) {
        for (int j = 0; j < len; ++j) {
            int bucket = (arr[j] % mode) / dev;   
            counter[bucket].push(arr[j]);  
        }
        
        int index = 0;
        for (int j = 0; j < 10; ++j) {  /* `10` is the length of the counter */
            while (!counter[j].empty()) {  
                arr[index++] = counter[j].front();
                counter[j].pop();
            } 
        }
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

    radixSort(arr, length, rangeTo);

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
