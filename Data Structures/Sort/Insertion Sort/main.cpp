#include <iostream>

void insertionSort(int *list, int len) {
    for (int i = 1; i < len; ++i) {
        int tmp = list[i];
        int j;	// save the location where `tmp` should be inserted.
        for (j = i; j > 0 && list[j - 1] > tmp; --j) {
            list[j] = list[j - 1];
        }
        list[j] = tmp;
    }
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    insertionSort(list, len);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
