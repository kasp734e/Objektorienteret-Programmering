#include "productCatalog.h"

void product_catalog::add_item(int id, const std::string& name, double price) {
    this->items_.push_back(item(id, name, price));
}

const item* product_catalog::get_item(int id) const {
    for (const auto& i : this->items_) {
        if (i.id == id) {
            return &i;
        }
    }
    return nullptr;
}