#include <ctime>
#include <vector>
#include <iostream>

void shiftDown(std::vector<int>& arr, size_t len, size_t idx) {
    while ((idx * 2 + 1) < len) {
        size_t child = idx * 2 + 1; 
        /* if idx's children are exist and the right side child is greater than the left one, change the child. */
        if (child + 1 < len && arr[child] < arr[child + 1]) {
            child ++;
        }
        /* if parent's value equals or greater than the child's, meet the definition of the maximum heap and break */
        if (arr[idx] >= arr[child]) {
            break;
        }
        /* if not, swap two values */
        std::swap(arr[idx], arr[child]);
        idx = child;
    }
}

void heapSort(std::vector<int>& arr) { 
    size_t len = arr.size();
    for (size_t i = len / 2 - 1; i >= 0; -- i) {
        shiftDown(arr, len, i);
    }
	
	for (size_t i = len - 1; i > 0; -- i) {
		std::swap(arr[0], arr[i]);
		shiftDown(arr, i, 0);
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

    heapSort(arr);

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
