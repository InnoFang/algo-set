#include <iostream>

int partition(int list[], int left, int right) {
    int l = left, r = right;
    int tmp = list[l];
    while (l != r) {
        while (l < r && list[r] >= tmp) --r;
        while (l < r && list[l] <= tmp) ++l;
        if (l < r) std::swap(list[l], list[r]);
    } 
    std::swap(list[l], list[left]);
    return l;
}

void quickSort(int list[], int left, int right) {
    if (left > right) return;
    int pivot = partition(list, left, right);
    quickSort(list, left, pivot - 1);
    quickSort(list, pivot + 1, right);
}


int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    quickSort(list, 0, len - 1);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}