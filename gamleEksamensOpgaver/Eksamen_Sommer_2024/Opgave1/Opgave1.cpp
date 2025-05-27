#include <iostream>
#include "Fraction.h"

int main()
{
	//Opgave 1 c-1)
	Fraction frac1;
    std::cout << frac1.getNominator() << frac1.getDenominator();
	//Opgave 1 c-2)
    try
    {
        Fraction frac2(0,0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	
	//Opgave 1 c-3)
	Fraction fraction_1(3,2);
    Fraction fraction_2(9,6);
    Fraction fraction_3(1,2);

    std::cout << (fraction_1 == fraction_2) << std::endl;
    std::cout << (fraction_1 == fraction_3) << std::endl;

	
	//Opgave 1 e)
    std::cout << fraction_2;


	//Opgave 1 g)

    Fraction frac_4(2,2);
    Fraction frac_5(3,3);

    std::cout << std::endl << (frac_4+frac_5);

	return 0;
}
