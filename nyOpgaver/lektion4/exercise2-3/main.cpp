#include <stdexcept>
#include <iostream>


double calculate(double n1, char op, double n2) {
    if (n1<0 || n2<0) {
        throw std::invalid_argument("op needs to be a valid operand");
    }
    
    switch (op)
    {
    case '+':
        return n1+n2;
        break;

    case '-':
        return n1-n2;
        break;

    case '*':
        return n1*n2;
        break;

    case '/':
        return n1/n2;
        break;

    default:
        break;
    }
}

int main() {


}