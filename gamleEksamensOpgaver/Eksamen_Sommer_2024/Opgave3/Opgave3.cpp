#include "NarrowBandAmplifier.h"
#include "BroadBandAmplifier.h"
#include <iostream>
int main()
{
	//Opgave 3 f-1)
  Signal s1;
  s1.addComponent(2,1000,1);
  s1.addComponent(4,2000,1);
  s1.addComponent(6,3000,1);
  s1.addComponent(8,4000,1);

  std::cout << s1.toString() << std::endl;

	//Opgave 3 f-2)

  BroadBandAmplifier broad1(2);
  NarrowBandAmplifier narrow1(10,3001,2999);

  broad1.amplify(s1);
  std::cout << s1.toString() << std::endl;

  narrow1.amplify(s1);
  std::cout << s1.toString() << std::endl;


	return 0;
}
