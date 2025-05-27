#include "int_array.h"

int_array::int_array(int initialSize, int re_alloc_size) : size_{initialSize}, re_alloc_size_{re_alloc_size}, head_{0} {
    this->array_ = new int[initialSize]{};
}
int_array::~int_array() {
    delete[] array_;
}
void int_array::push_back(int value) {
    if (head_==size_) {
        int* newArray = new int[size_+re_alloc_size_]{};
        for (int i = 0; i < size_; ++i) {
            newArray[i] = array_[i];
        }
        delete[] array_;
        array_ = newArray;
        size_ += re_alloc_size_;
        array_[head_] = value;
        head_++;
    } else {
        array_[head_]=value;
        head_++;
    }
}
std::string int_array::to_string() const {
    std::string retur = ""; 
    for (int i = 0; i<head_; i++) {
        retur += std::to_string(array_[i])+ " ";
    }
    return retur;
}
int int_array::get_size() const {
    return head_;
}
int int_array::get_array_size() const {
    return size_;
}