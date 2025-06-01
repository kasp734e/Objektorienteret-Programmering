#include "Point.h"

std::ostream& operator<<(std::ostream& os, const point& p)
{
	os << "(" << p.x << "," << p.y << ")";
	return os;
}
