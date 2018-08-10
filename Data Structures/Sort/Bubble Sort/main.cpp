#include <iostream>

void bubbleSort(int list[], int len) {
    for (int i = 0; i < len - 1; ++i) 
        for (int j = 0; j < len - 1 - i; ++j) 
            if (list[j] > list[j + 1])  
                std::swap(list[j], list[j+1]);
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    bubbleSort(list, len);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
