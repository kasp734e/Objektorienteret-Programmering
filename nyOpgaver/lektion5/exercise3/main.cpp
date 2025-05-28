#include <iostream>
#include "linkedList.h"
#include "cat.h"

int main() {
    linkedList list;

    cat cat1("Milo", 30, 4);
    cat cat2("Luna", 28, 3);
    cat cat3("Simba", 25, 3);

    list.insert_front(cat1);
    list.insert_front(cat2);
    list.insert_front(cat3);

    std::cout << "List of cats: \n" << list.to_string() << std::endl;

    return 0;
}
