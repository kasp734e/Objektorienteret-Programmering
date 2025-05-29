// Opgave 3 g)
#include "RemoveChar.h"

void RemoveChar::process(std::string& text) {
  for (std::string::iterator it = text.begin(); it != text.end(); ) {
    if (*it == this->c) {
      it=text.erase(it);
    } else {
      it++;
    }
  }
}

RemoveChar::RemoveChar(char charToDelete) : c{charToDelete} {}
