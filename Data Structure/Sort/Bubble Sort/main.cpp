#include <ctime>
#include <vector>
#include <iostream>

void bubbleSort(std::vector<int>& arr) { 
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = 0; j < arr.size() - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

std::vector<int> generateRandomArray(size_t length, size_t rangeFrom, size_t rangeTo);
void printArray(const std::vector<int>& arr);

int main() {
    size_t dataSize = 20;
    size_t rangeFrom = 1;
    size_t rangeTo = 10000;

    auto arr = generateRandomArray(dataSize, rangeFrom, rangeTo); 
 	
    std::cout << "Original array:" << std::endl;
    printArray(arr);

    bubbleSort(arr);

    std::cout << "Sorted array:" << std::endl;
    printArray(arr);

    return 0;
}

/* Randomly generate an array with the `dataSize`, which is from `rangeFrom` to `rangeTo` */
std::vector<int> generateRandomArray(size_t dataSize, size_t rangeFrom, size_t rangeTo) {
    size_t range = rangeTo - rangeFrom + 1;
    srand(time(nullptr));

    std::vector<int> arr(dataSize);
    for (size_t i = 0; i < dataSize; ++ i) {
        arr[i] = rand() % range + rangeFrom;
    }
    return arr;
}

/* formatted output array */
void printArray(const std::vector<int>& arr) {
    for (const auto& num: arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}