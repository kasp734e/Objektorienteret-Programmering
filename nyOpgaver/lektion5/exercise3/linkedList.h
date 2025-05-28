#pragma once
#include "link.h"

class linkedList {
    private:
    
    int size_;

    public:
    link head_;
    linkedList();
    ~linkedList();
    void insert_front(const cat& data);
    void insert_after(const cat& data, link* link);
    void delete_front();
    link* get(int index);
    int size() const;
    std::string to_string();

};