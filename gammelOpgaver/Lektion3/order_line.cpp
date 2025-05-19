#include "order_line.h"

order_line::order_line(const item* item_, int count) {
    this -> item_= item_;
    this -> count_ = count;
}

double order_line::sub_total() const {
    return item_->price*count_;
}

int order_line::get_item_id() const {
    return item_->id;
}

void order_line::add(int count) {
    this -> count_ = this-> count_ + count;
}

std::string order_line::to_string() const {
    return item_->name + " " + std::to_string(item_->price) + " " + std::to_string(sub_total());
}