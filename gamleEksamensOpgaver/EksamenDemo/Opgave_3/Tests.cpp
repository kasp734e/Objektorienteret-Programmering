#include "Tests.h"
#include "Rotation.h"
#include "Translation.h"
#include "Combiner.h"
#include <iostream>
#include <cmath>


//Used to represent PI
const double pi = acos(-1);

//Opgave c-2)
void test_rotation() {
    point p;
    p.x = 1;
    p.y = 1;

    rotation rot(pi/2);
    std::cout << rot.transform(p) << std::endl;

}

//Opgave e-2)
void test_translation() {   
    point p;

    p.x = 1;
    p.y = 1;

    translation trans(2,3);
    std::cout << trans.transform(p) << std::endl;
}

//Opgave g-2)
void test_combiner()
{
    rotation rot(pi/2);
    translation trans(4,6);
    combiner comb;
    
    comb.add(&rot);
    comb.add(&trans);

    point p;
    p.x = 3;
    p.y = 6;

    std::cout << comb.transform(p) << std::endl;

}


