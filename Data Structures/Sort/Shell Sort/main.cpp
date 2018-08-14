#include <iostream> 

void shellSort(int * list, int len) {
    int gap = 1;
    
    while (gap < len / 3) {
        gap = gap * 3 + 1;
    }
    
    for (; gap > 0; gap = (gap - 1) / 3) {   
        for (int i = gap; i < len; i += gap) {
            int tmp = list[i], j = i;
            for (; j >= 0 && list[j - gap] > tmp; j -= gap) {
                list[j] = list[j - gap];
            }
            list[j] = tmp;
        }
    }
}

int main() {
    int list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};
 	int len = sizeof(list) / sizeof(int);
 	
    shellSort(list, len);

    for (int i = 0 ; i < len; ++i) std::cout << list[i] << " ";
    std::cout << std::endl;

    return 0;
}
