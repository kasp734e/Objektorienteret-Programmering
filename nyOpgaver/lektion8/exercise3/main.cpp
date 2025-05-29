#include<vector>
#include<iostream> 

template<typename T>
void sort(std::vector<T> &v) {
  for (size_t i = 0; i < v.size(); i++) {
    for (size_t j = v.size() -1; j>i; j--) {
      if (v[j-1] > v[j]) {
        T temp = v[j-1];
        v[j-1] = v[j];
        v[j] = temp;
      }
    }
  }
}

int main() {

  std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
  sort(numbers);
  for (int n : numbers) {
    std::cout << n << " ";
  }
  std::cout << std::endl;

  std::vector<std::string> words = {"banana", "apple", "cherry"};
  sort(words);
  for (const auto& word : words) {
    std::cout << word << " ";
  }
  std::cout << std::endl;
}