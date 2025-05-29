#include "Currency.h"
#include "Amount.h"
#include <iostream>

int main()
{
	//Opgave 1 a)
  Currency Dollar("Dollar",0.92);
  std::cout << Dollar.fromStandardCurrency(460) << std::endl;

  std::cout << Dollar.toStandardCurrency(460) << std::endl;

	//Opgave 1 e)
  Amount amount(1000, Dollar);
  std::cout << amount.toString()<<std::endl;

	//Opgave 1 g)
  Currency Pound("Pound",1.18);
  Amount DAmount(1000, Dollar);
  Amount PAmount(1000, Pound);

  std::cout << (DAmount + PAmount).toString() << std::endl;


	//Opgave 1 i)

  Amount DAmount2(500, Dollar);
  Amount PAmount2(389.83, Pound);

  std::cout << (DAmount2 == PAmount2) << std::endl;


	return 0;
}
