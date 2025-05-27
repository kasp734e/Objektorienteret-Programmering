#pragma once
#include "cat.h"

class link {
    private:
    link* next_;
    cat* data_;

    public:
    link();
    link(const cat& data);
    link(const cat& data, link* next);
    ~link();
    cat* get_data();
    void set_next();
    link* get_next();
    void set_next(link* next);
};