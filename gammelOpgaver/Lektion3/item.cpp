#include "item.h"
#include <format>
item::item(int id, const std::string& name, double price) : id(id), name(name), price(price) {}

const std::string item::to_string() {
    std::string returnString = this->name + " " + std::format("{:.2f}", std::floor(this->price * 100) / 100);
    return returnString;
}