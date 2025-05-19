#include <iostream>

double calculate(double tal1, char op, double tal2, int& errorcode) {
    if ((tal1 < 0 )||(tal2 < 0)) {
        errorcode = 2;
        return 0 ;
    } else {
        switch (op){
        case '+':
            return tal1+tal2;
            break;
        
            case '-':
            return tal1-tal2;
            break;
        
        case '*':
            return tal1*tal2;
            break;
        
        case '/':
            if (tal2 == 0) {
                errorcode = 1;
            } else {
                return tal1/tal2;
            }
            break;
        
        default:
            break;
        }
    }
}

int main() {

    double number1 = 0;
    double number2 = 0;
    char ting = '+';

    int error = 0;

    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> ting;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    calculate(number1,ting,number2,error);

    switch (error)
    {
    case 0:
        std::cout << calculate(number1,ting,number2,error);
        break;
    case 1:
        std::cout << "You tried to divide by 0" << std::endl;
        break;
    case 2:
        std::cout << "Input is negative" << std::endl;
        break;
    }

}