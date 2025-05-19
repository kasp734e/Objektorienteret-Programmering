#include <iostream>
#include <stdbool.h>
#include <vector>

bool isValid(int grade) {
    bool valid = false;
    int validGrades[] = {-3,0,2,4,7,10,12};
    
    for (auto i : validGrades) {
        if (grade == i) {
            valid = true;
        }
    }
    return valid;
}

int main() {
    float input = 0;
    
    std::vector<float> grades;
    float sum = 0;

    while (true) {
        std::cout << "Input a grade" << std::endl;
        std::cin >> input;
        if (input == -99) {
            break;
        }
        if (isValid(input)) {
            grades.push_back(input);
        }
    }

    std::cout << std::endl;
    for (auto i : grades) {
        sum += i;
        std::cout << i << std::endl;
    }
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << sum/grades.size() << std::endl;


}