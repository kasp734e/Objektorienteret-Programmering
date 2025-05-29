#include "ToUpperCase.h"
#include "Util.h"

// Opgave 3 c)
void ToUpperCase::process(std::string& text) {
  for (char &i : text) {
    i = toUpper(i);
  }
}
