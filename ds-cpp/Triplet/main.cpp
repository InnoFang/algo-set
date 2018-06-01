#include <iostream>
#include "Triplet.h"

int main() {
    Triplet<int> tri(2, 4, 6);
    std::cout << "Get the first one from Triplet " << tri.get(0) << std::endl;
    // Modify the first one in the Triplet
    tri.put(0, 1);
    std::cout << "Is the Triplet ascending? " << tri.isAscending() << std::endl;
    std::cout << "Is the Triplet descending? " << tri.isDescending() << std::endl;
    std::cout << "Get the maximum one from Triplet " << tri.max() << std::endl;
    std::cout << "Get the minimum one from Triplet " << tri.min() << std::endl;
    return 0;
}