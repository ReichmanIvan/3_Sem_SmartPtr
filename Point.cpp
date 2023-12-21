#include "Point.h"
#include <sstream>

Point::Point(const double value_x, const double value_y)
	: x(value_x), y(value_y)
{
}

bool operator==(const Point& lha, const Point& rha)
{
	return (is_double_equal(lha.x, rha.x) && is_double_equal(lha.y, rha.y));
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "Point(" << point.x << ", " << point.y << ")";
	return out;
}
