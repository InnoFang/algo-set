#include <ctime>
#include <vector>
#include <iostream>

int partition(std::vector<int>& arr, int left, int right) {
    int l = left, r = right;
    int tmp = arr[l];
    while (l != r) {
        while (l < r && arr[r] >= tmp) -- r;
        while (l < r && arr[l] <= tmp) ++ l;
        if (l < r) std::swap(arr[l], arr[r]);
    }
    std::swap(arr[l], arr[left]);
    return l;
}

void _quickSort(std::vector<int>& arr, int left, int right) {
    if (left > right) return;
    int pivot = partition(arr, left, right);
    _quickSort(arr, left, pivot - 1);
    _quickSort(arr, pivot + 1, right);
}

void quickSort(std::vector<int>& arr) {
    _quickSort(arr, 0, arr.size() - 1);
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

    quickSort(arr);

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
