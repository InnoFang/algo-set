#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>

void merge(std::vector<int>& arr, size_t left, size_t mid, size_t right) {
    std::vector<int> aux(right - left + 1);

    // copy arr[left:right] to aux[]
    // for (size_t i = left; i <= right; ++ i) 
    //     aux[i - left] = arr[i];
    std::copy_n(arr.begin() + left, right - left + 1, aux.begin());

    size_t l = left, r = mid + 1;
    for (size_t i = left; i <= right; ++ i) {
        if (l > mid) {
            arr[i] = aux[r - left]; 
            ++ r;
        } else if (r > right) {
            arr[i] = aux[l - left];
            ++ l;
        } else if (aux[l - left] < aux[r - left]) {
            arr[i] = aux[l - left];
            ++ l;
        } else {
            arr[i] = aux[r - left];
            ++ r;
        }
    }
}

void _mergeSort(std::vector<int>& arr, size_t left, size_t right) {
    if (left >= right) return;

    size_t mid = left + (right - left) / 2;
    _mergeSort(arr, left, mid);
    _mergeSort(arr, mid + 1, right);

    // optimization, merge arr when arr is out of order
    if (arr[mid] > arr[mid + 1]) {
        merge(arr, left, mid, right);
    }
}

void mergeSort(std::vector<int>& arr) { 
    _mergeSort(arr, 0, arr.size() - 1);
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

    mergeSort(arr);

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
