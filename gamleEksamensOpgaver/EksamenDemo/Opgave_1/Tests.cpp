#include "Tests.h"

// Opgave b-2)	
void test_to_string()
{
    vector_3d vec(1,2,3);
    std::cout << vec.to_string() << std::endl;
}

// Opgave c-2)	
void test_additive_inverse_operator()
{
    vector_3d vec(1,2,3);
    std::cout << (!vec).to_string() << std::endl;
}

//Opgave d-3)
void test_addition_operator()
{
	vector_3d vec1(1,2,3);
    vector_3d vec2(3,2,1);
    std::cout << (vec1+vec2).to_string() << std::endl;
}

//Opgave e-3)
void test_subtraction_operator()
{
    vector_3d vec1(1,2,3);
    vector_3d vec2(3,2,1);
    std::cout << (vec1-vec2).to_string() << std::endl;
}
