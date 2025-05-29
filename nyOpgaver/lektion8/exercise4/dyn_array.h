#pragma once

#include <string>
#include <stdexcept>

template<typename T>
class dyn_array {
public:
    dyn_array(int initial_size, int re_alloc_size);

    dyn_array(const dyn_array &);

    ~dyn_array();

    void add(const T &);

    T get(int index) const;

    [[nodiscard]] int get_size() const;

    [[nodiscard]] int get_array_size() const;

    [[nodiscard]] int get_re_alloc_size() const;

private:
    int size_;
    int head_;
    int re_alloc_size_;
    T **array_;
};
