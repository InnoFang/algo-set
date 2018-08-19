#include <iostream>

void merge(int list[], int left, int mid, int right) {
    int * aux = new int[right - left + 1];

    for (int i = left; i <= right; ++i) 
        aux[i - left] = list[i];

    int l = left, r = mid + 1;
    for (int i = left; i <= right; ++i) {
        if (l > mid) {
            list[i] = aux[r - left]; 
            ++r;
        } else if (r > right) {
            list[i] = aux[l - left];
            ++l;
        } else if (aux[l - left] < aux[r - left]) {
            list[i] = aux[l - left];
            ++l;
        } else {
            list[i] = aux[r - left];
            ++r;
        }
    }
}

void mergeSort(int list[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(list, left, mid);
    mergeSort(list, mid + 1, right);

    // optimization, merge list when list is out of order
    if (list[mid] > list[mid + 1])
        merge(list, left, mid, right);
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    mergeSort(list, 0, len - 1);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
