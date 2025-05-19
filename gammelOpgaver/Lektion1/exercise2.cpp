#include "iostream"

void writeArray(int* const a, const size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << a[i] << std::endl;
    }    
}

void swap(int* a, int* b) {
    int tempvar;
    tempvar = *a;
    *a = *b;
    *b = tempvar;
}

void increment(int* const a, const int incr, const size_t size) {
    for (size_t i = 0; i < size; i++) {
        a[i] += incr;
    }
}

int main() {



};