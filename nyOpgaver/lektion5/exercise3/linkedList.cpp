#include "linkedList.h"

linkedList::linkedList() : size_{0} {}

linkedList::~linkedList() {
  link* p = head_.get_next();
  while (p != nullptr) {
    link* p_next_link = p->get_next();
    delete p;
    p = p_next_link;
  }
}

void linkedList::insert_front(const cat& data) {
  link* newLinkP = new link(data);
  newLinkP->set_next(head_.get_next());
  head_.set_next(newLinkP);
  size_++;
}

void linkedList::delete_front() {
  link* to_delete = head_.get_next();
  if (to_delete == nullptr) {return;}
  head_.set_next(to_delete->get_next());
  delete to_delete;
  size_--;

}

void linkedList::insert_after(const cat& data, link* after_link) {
  link* newLinkP = new link(data);
  newLinkP->set_next(after_link->get_next());
  after_link->set_next(newLinkP);
  size_++;
}

link* linkedList::get(int index) {
  if (index <0 || index >= size_) {
    throw std::out_of_range("Out of range");
  }
  link* currentLink = head_.get_next();
  for (int i = 0; i<index; i++) {
    currentLink = currentLink->get_next();
  }
  return currentLink;

}

int linkedList::size() const {
  return size_;
}

std::string linkedList::to_string() {
  std::string streng = "";
  link* currentLink = &head_;
  for (int i = 0; i<size_; i++) {
    currentLink = currentLink->get_next();
    streng += currentLink->get_data()->to_string() + "\n";
  }
  return streng;
}
