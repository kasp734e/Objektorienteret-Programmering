#include "Rotation.h"

//Opgave c-1)
rotation::rotation(double angle) : transformer(), angle{angle} {}

point rotation::transform(const point& p) {
    point newPoint;
    newPoint.x = cos(angle)*p.x - sin(angle)*p.y;
    newPoint.y = sin(angle)*p.x + cos(angle)*p.y;
    return newPoint;
}