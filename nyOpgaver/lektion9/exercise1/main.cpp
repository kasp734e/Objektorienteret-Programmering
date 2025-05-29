#include "person.h"
#include <vector>

int main() {

  std::vector<Person> people;

  for (int i = 0; i<10; i++) {
    people.push_back(Person(1, "John Doe"));
  }

  for (std::vector<Person>::iterator it = people.begin(); it != people.end(); it++) {
    std::cout << *it;
    if (std::next(it)!= people.end()) {
      std::cout << "\n";
    }
  }
}