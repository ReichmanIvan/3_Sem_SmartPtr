#include "Line.h"

Line::Line(std::shared_ptr<Point> point_1, std::shared_ptr<Point> point_2, std::shared_ptr<Color> color)
    : point_1(point_1), point_2(point_2), color(color)
{
    if (point_1 == point_2)
    {
        throw std::out_of_range("Not line");
    }
}

std::shared_ptr<Point> Line::get_point_1() const
{
    return this->point_1;
}

std::shared_ptr<Point> Line::get_point_2() const
{
    return this->point_2;
}

std::shared_ptr<Color> Line::get_color() const
{
    return this->color;
}

std::ostream& operator<<(std::ostream& out, const Line& line)
{
    out << "line(" << *line.get_point_1() << ", " << *line.get_point_2() << ", " << *line.get_color() << ")";
    return out;
}
