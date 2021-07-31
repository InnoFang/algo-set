#include <ctime>
#include <vector>
#include <iostream> 

void shellSort(std::vector<int>& arr) {
    size_t gap = 1;
    
    while (gap < arr.size() / 3) {
        gap = gap * 3 + 1;
    }
    
    for (; gap > 0; gap = (gap - 1) / 3) {   
        for (int i = gap; i < arr.size(); i += gap) {
            int tmp = arr[i], j = i;
            for (; j > 0 && arr[j - gap] > tmp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = tmp;
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

    shellSort(arr);

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
