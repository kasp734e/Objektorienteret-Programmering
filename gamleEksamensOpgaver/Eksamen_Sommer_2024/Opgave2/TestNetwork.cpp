#include "TestNetwork.h"
#include <iostream>

void test_network()
{
	const Location l11(1, 1);
	const Location l12(1, 2);
	const Location l21(2, 1);
	const Location l22(2, 2);

	Network<Location> network;
	network.addNode(l11);
	network.addNode(l12);
	network.addNode(l21);
	network.addNode(l22);


	//Self connection not allowed
	try
	{
		network.addConnection(l11, l11);
	}
	catch (std::invalid_argument& e)
	{
		std::cout << e.what() << '\n';
	}

	//(1,1)-(2,2)
	network.addConnection(l11, l22);

	//Connection is already established
	try
	{
		network.addConnection(l22, l11);
	}
	catch (std::invalid_argument& e)
	{
		std::cout << e.what() << '\n';
	}

	//(1,1)-(1,2)
	network.addConnection(l11, l12);

	//(1,1)-(2,1)
	network.addConnection(l11, l21);

	const auto neighbours = network.getAllNeighbours(l11);
	std::cout << "Number of neighbours " << neighbours.size() << '\n';
}
