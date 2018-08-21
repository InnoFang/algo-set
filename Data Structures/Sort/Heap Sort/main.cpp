#include <iostream>

void shiftDown(int list[], int len, int idx) {
    while ((idx * 2 + 1) < len) {
        int child = idx * 2 + 1; 
        /* if idx's children are exist and the right side child is greater than the left one, change the child. */
        if (child + 1 < len && list[child] < list[child + 1]) ++child;
        /* if parent's value equals or greater than the child's, meet the definition of the maximum heap and break */
        if (list[idx] >= list[child]) break;
        /* if not, swap two values */
        std::swap(list[idx], list[child]);
        idx = child;
    }
}

void heapSort(int list[], int len) { 

    for (int i = len / 2 - 1; i >= 0; --i) {
        shiftDown(list, len, i);
    }
	
	for (int i = len - 1; i > 0; --i) {
		std::swap(list[0], list[i]);
		shiftDown(list, i, 0);
	}
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    heapSort(list, len);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
