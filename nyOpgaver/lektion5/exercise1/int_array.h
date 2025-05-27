#pragma once
#include <iostream>

class int_array {
    private:
        int size_;
        int head_;
        int re_alloc_size_;
        int* array_;

    public:
        int_array(int initialSize, int re_alloc_size);
        ~int_array();
        void push_back(int value);
        std::string to_string() const;
        int get_size() const;
        int get_array_size() const;

};