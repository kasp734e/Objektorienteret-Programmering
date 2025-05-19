#pragma once
#include "iostream"
class logger {
    private:
        std::string file_name;

    public:
        void write_ln(std::string text);
};