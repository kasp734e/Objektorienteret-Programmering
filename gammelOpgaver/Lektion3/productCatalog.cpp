#include "productCatalog.h"


void product_catalog::add_item(int id, const std::string& name, double price) {
    this->items_.push_back(item(id, name, price));
}

const item* product_catalog::get_item(int id) const {
    bool success = false;
    for (const auto& i : items_) {
        if (i.id==id) {
            success = true;
            return &i;
        }
    }
    if (success == false) {
        return nullptr;
    }
}