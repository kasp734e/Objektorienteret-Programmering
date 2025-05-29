#include <vector>
#include <stdexcept>
#include <iostream>

template<typename T>
T max(std::vector<T> input) {
  if (input.empty()) {
    throw std::out_of_range("Vector is empty");
  }
  T maxVar = input[0];

  for (auto i : input) {
    if (i > maxVar) {
      maxVar = i;
    }
  }

  return maxVar;
}

int main() {

  std::vector<int> v1 = {1, 5, 3, 9, 2};
  std::vector<double> v2 = {2.5, 3.7, 1.4, 6.8};
  std::vector<int> v3 = {};

  try {
    int maxInt = max(v1);
    std::cout << "Max of v1: " << maxInt << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception for v1: " << e.what() << std::endl;
  }

  try {
    double maxDouble = max(v2);
    std::cout << "Max of v2: " << maxDouble << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception for v2: " << e.what() << std::endl;
  }

  try {
    int maxEmpty = max(v3);
    std::cout << "Max of v3: " << maxEmpty << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception for v3: " << e.what() << std::endl;
  }

}