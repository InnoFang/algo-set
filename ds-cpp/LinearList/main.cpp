#include <iostream>
#include "List.h"

List::List<int> list(10);

bool compare(int i) {
    return true;
}

void visit(int item) {
    std::cout << "list[" << list.locateItem(item, compare) << "] : " << item << std::endl;
}

int main() {
    std::cout << "Is empty? " << list.isEmpty() << std::endl;

    list.insert(1);
    list.insert(3);
    list.insert(5);
    list.insert(7);
    list.insert(9);

    std::cout << "The length of list is " << list.getLength() << std::endl;

//    list.traverse(visit);

    std::cout << "The 3rd item is " << list.get(2) << std::endl;
    std::cout << "The priority item of item 5 is " << list.priorItem(5) << std::endl;
    std::cout << "The next item of item 5 is " << list.priorItem(5) << std::endl;

    list.remove(2);

    std::cout << "After removing, the length of list is " << list.getLength() << std::endl;

    list.clear();

    return 0;
}