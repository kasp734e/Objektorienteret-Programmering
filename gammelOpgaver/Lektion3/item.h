#pragma once
#include <iostream>
class item {
    public:
       const int id;
       const std::string name;
       const double price;

       item(int id, const std::string& name, double price);
       const std::string to_string();
};