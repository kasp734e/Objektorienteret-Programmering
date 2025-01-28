#include "iostream"
#include "vector"

class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
        std::string getName() {
            return this->name;
        }
        int getAge() {
            return this->age;
        }
};

float averageAge(std::vector<Person*> people) {
    int ageSum = 0;
    for (auto person : people) {
        ageSum += person->getAge();
    }
    return ageSum / people.size();
}

int main() {
    Person Person1("John", 21);
    Person Person2("Jane", 22);
    Person Person3("Joe", 23);
    Person Person4("Jill", 24);
    Person Person5("Jack", 25);

    std::vector<Person*> people;

    people.push_back(&Person1);
    people.push_back(&Person2);
    people.push_back(&Person3);
    people.push_back(&Person4);
    people.push_back(&Person5);

    std::cout << "Average age: " << averageAge(people) << std::endl;

}