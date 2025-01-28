#include "iostream"
#include "vector"
#include "stdbool.h"

bool isGradeValid(int grade) {
    int validGrades[] = {-3, 0, 2, 4, 7, 10, 12};
    for (auto number : validGrades) {
        if (grade == number) {
            return true;
        }
    }
}

void printGradesAndAverage(std::vector<int> grades) {
    int gradeSum = 0;
    for (auto grade : grades) {
        std::cout << grade << std::endl;
        gradeSum += grade;
    }
    std::cout << gradeSum << std::endl;
    std::cout << "Average: " << gradeSum / grades.size() << std::endl;
}

int main()
{
    std::vector<int> grades;
    int grade = 0;
    int gradeSum = 0;
    while (grade != -99) {
        std::cout << "Enter a grade: ";
        std::cin >> grade;
        
        if (isGradeValid(grade)) {
            grades.push_back(grade);
        } else {
            if (grade == -99) {
                
            } else {
            std::cout << "Invalid grade" << std::endl;
            }
        }
    }

    printGradesAndAverage(grades);
    return 0;
}