#include "cat.h"

cat::cat(const std::string &name, int height, int weight) : name_{name}, height_{height}, weight_{weight} {}

double cat::body_mass_index() const {
    return weight_/(height_*height_);
}
std::string cat::to_string() const {
    return name_ + " vejer: " + std::to_string(weight_) + " og er " + std::to_string(height_) + " høj.";
}