#pragma once
#include "cat.h"
#include <stdexcept>

class cat_array {
    private:
    cat** array_;
    int head_;
    int size_;
    int re_alloc_size;

    public:
    cat_array(int initial_size, int re_alloc_size);
    ~cat_array();
    void add(const std::string name, int height, int weight);
    int get_size();
    int get_array_size();
    cat get(int index) const;
};