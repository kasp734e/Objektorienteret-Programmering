#include "link.h"

link::link() : next_{nullptr}, data_{nullptr} {}

link::link(const cat& data) {
    data_ = new cat(data);
    next_ = nullptr;
}

link::link(const cat& data, link* next) {
    data_ = new cat(data);
    next_ = next;
}

link::~link() {
    delete data_;
}

cat* link::get_data() {
    return data_;
}

void link::set_next(link* node) {
    next_ = node;
}

link* link::get_next() {
    return next_;
}