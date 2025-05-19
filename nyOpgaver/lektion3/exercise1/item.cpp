#include "item.h"

item::item(int id, const std::string& name, double price) : id(id), name(name), price(price) {};
const std::string item::to_string() {
    std::string text = name + std::to_string(std::round(price * 100) / 100.0);
    return text;
}