
// Opgave 3 e)
#include "ToLowerCase.h"
#include "Util.h"

void ToLowerCase::process(std::string& text) {
  for (char& i : text){
    i=toLower(i);
  }
}