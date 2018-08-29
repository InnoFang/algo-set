#include <iostream> 
#include <ctime>

void shellSort(int * list, int len) {
    int gap = 1;
    
    while (gap < len / 3) {
        gap = gap * 3 + 1;
    }
    
    for (; gap > 0; gap = (gap - 1) / 3) {   
        for (int i = gap; i < len; i += gap) {
            int tmp = list[i], j = i;
            for (; j > 0 && list[j - gap] > tmp; j -= gap) {
                list[j] = list[j - gap];
            }
            list[j] = tmp;
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

    shellSort(arr, length);

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
