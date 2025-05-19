#pragma once
#include <vector>
#include "item.h"

class product_catalog {
    private:
        std::vector<item> items_;

    public:
        void add_item(int id, const std::string& name, double price);
        const item* get_item(int id) const;
};