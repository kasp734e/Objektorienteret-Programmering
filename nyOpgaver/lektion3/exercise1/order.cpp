#include "order.h"
order::order(int register_id) : id_{0}, register_id_{register_id}

void order::next_sale(int order_id) {
        this->lines_ = {};
        this->id_++;
}
void order::add_item(const item* item, int count = 1) {
        bool inOrder = false;
        for (order_line line : this->lines_) {
                if (line.get_item_id() == item->id) {
                        inOrder = true;
                        
                } 
        }   
        if (inOrder) {
                for (order_line line: this->lines_) {
                        if (line.get_item_id() == item->id) {
                                line.add(count);
                        }
                }
        } else {
                this->lines_.push_back(order_line(item, count));
        }
}
double order::total() {
        
}
std::string order::to_string() {
        
}