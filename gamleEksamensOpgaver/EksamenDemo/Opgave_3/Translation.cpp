
//Opgave e-1)
#include "Translation.h"

translation::translation(double dx, double dy) : transformer(), dx{dx}, dy{dy} {}
point translation::transform(const point& p) {
    point newP;
    newP.x = dx+p.x;
    newP.y = dy+p.y;
    return newP;
}