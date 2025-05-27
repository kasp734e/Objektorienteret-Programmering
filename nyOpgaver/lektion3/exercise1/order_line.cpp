#include "order_line.h"        
        
order_line::order_line(const item* item_, int count = 1) : item_(item_), count_(count) {}

double order_line::sub_total() const {
    return (this->item_->price*this->count_);
}

int order_line::get_item_id() const {
    return this->item_->id;
}

void order_line::add(int count) {
    this->count_ += count;
}

std::string order_line::to_string() const {
    std::string text = "";
    text = this->item_->name + " " + std::to_string(this->count_)+ " " + std::to_string(this->item_->price*this->count_);
    return text;
}