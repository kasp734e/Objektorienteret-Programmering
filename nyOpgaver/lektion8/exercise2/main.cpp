#include <vector>
#include <iostream>

template<typename T>
bool exists(std::vector<T> data, T val) {
  for (auto i : data) {
    if (i == val) {
      return true;
    }
  }
  return false;
}

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::vector<std::string> words = {"apple", "banana", "cherry"};

  if (exists(numbers, 3)) {
    std::cout << "3 exists in numbers\n";
  } else {
    std::cout << "3 does not exist in numbers\n";
  }

  if (exists(numbers, 10)) {
    std::cout << "10 exists in numbers\n";
  } else {
    std::cout << "10 does not exist in numbers\n";
  }

  if (exists(words, std::string("banana"))) {
    std::cout << "\"banana\" exists in words\n";
  } else {
    std::cout << "\"banana\" does not exist in words\n";
  }

  if (exists(words, std::string("orange"))) {
    std::cout << "\"orange\" exists in words\n";
  } else {
    std::cout << "\"orange\" does not exist in words\n";
  }

}