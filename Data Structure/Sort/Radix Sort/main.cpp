#include <ctime>
#include <queue> 
#include <vector>
#include <algorithm>
#include <iostream>

void radixSort(std::vector<int>& arr) { 
    int maxDigit = *max_element(arr.begin(), arr.end());

    /* Counter consist of ten queues that store the number of the corresponding digit. */
    std::queue<int> counter[10];    
    for (int i = 1, mod = 10, dev = 1; i < maxDigit; i *= 10, mod *= 10, dev *= 10) {
        for (int j = 0; j < arr.size(); ++j) {
            int bucket = (arr[j] % mod) / dev;   
            counter[bucket].push(arr[j]);  
        }
        
        int index = 0;
        /* `10` is the length of the counter */
        for (int j = 0; j < 10; ++ j) {  
            while (!counter[j].empty()) {  
                arr[index++] = counter[j].front();
                counter[j].pop();
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

    radixSort(arr);

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
