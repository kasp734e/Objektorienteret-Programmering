#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1,2,3,4,5};

    std::vector<int>::iterator vBegin = v.begin();

    std::cout << *vBegin;
}