#include "Color.h"

Color::Color(const int red, const int green, const int blue)
    : red(red), green(green), blue(blue)
{
    if (red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255)
    {
        throw std::out_of_range("Not correct color");
    }
}

int Color::get_red() const
{
    return this->red;
}

int Color::get_green() const
{
    return this->green;
}

int Color::get_blue() const
{
    return this->blue;
}

std::ostream& operator<<(std::ostream& out, const Color& color)
{
    out << "color(" << color.get_red() << ", " << color.get_green() << "," << color.get_blue() << ")";
    return out;
}
