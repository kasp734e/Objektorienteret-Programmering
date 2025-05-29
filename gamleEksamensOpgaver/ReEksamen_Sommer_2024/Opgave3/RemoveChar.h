#pragma once
#include "StringProcessor.h"
// Opgave 3 f)

class RemoveChar : public StringProcessor {
  private:
  char c;
  public:
  void process(std::string& text) override;
  RemoveChar(char charToDelete);
};