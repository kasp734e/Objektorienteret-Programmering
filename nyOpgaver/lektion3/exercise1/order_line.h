#pragma once
#include "item.h"
class order_line {
    private:
        const item* item_;
        int count_ = 1;

    public:
        order_line(const item* item_, int count = 1);
        double sub_total() const;
        int get_item_id() const;
        void add(int count);
        std::string to_string() const;
};