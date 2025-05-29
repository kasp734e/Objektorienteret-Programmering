#pragma once
#include "StringProcessor.h"
// Opgave 3 d)

class ToLowerCase : public StringProcessor {
  void process(std::string& text) override;
};