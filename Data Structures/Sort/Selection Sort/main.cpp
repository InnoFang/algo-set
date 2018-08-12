#include <iostream>

void selectionSort(int list[], int len) {
    for (int i = 0; i < len; ++i) {
        int idx = i;
        for (int j = i + 1; j < len; ++j) {
            if (list[idx] > list[j]) {
                idx = j;
            }
        }
        if (idx != i) 
            std::swap(list[idx], list[i]);
    }      
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    selectionSort(list, len);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
