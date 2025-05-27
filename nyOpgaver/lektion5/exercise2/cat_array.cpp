#include "cat_array.h"

cat_array::cat_array(int initial_size, int re_alloc_size) : size_{initial_size}, head_{0}, re_alloc_size{re_alloc_size} {
    array_ = new cat*[initial_size];
}
cat_array::~cat_array() {
    for (int i = 0; i < head_; i++) {
        delete array_[i];
    }
    delete[] array_;
}
void cat_array::add(const std::string name, int height, int weight) {

    if (head_==size_) {
        cat** newArray = new cat*[size_+re_alloc_size];

        for (int i; i < head_; i++) {
            newArray[i] = array_[i];
        } 
        array_ = newArray;
        delete newArray;
        size_ = size_ + re_alloc_size;
    }
    array_[head_] = new cat(name, height, weight);
    head_++;
}
int cat_array::get_size() {
    return head_;
}
int cat_array::get_array_size() {
    return size_;
}

cat cat_array::get(int index) const {
    if (index<0 || index+1>head_) {
        throw std::out_of_range("Index out of range");
    } else {
        return *array_[index];
    }
}