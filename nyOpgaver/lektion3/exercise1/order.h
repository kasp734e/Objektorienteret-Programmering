#pragma once
#include <vector>
#include "order_line.h"
class order {
    private:
        const int id_;
        const int register_id_;
        std::vector<order_line> lines_;

    public:
        order(int register_id);
        void next_sale(int order_id);
        void add_item(const item* item, int count = 1);
        double total();
        std::string to_string();
};