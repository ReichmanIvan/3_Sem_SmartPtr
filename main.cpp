#include <iostream>
#include "..\Line\Line.h"

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
 */
int main()
{
    std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
    std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
    std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
    Line line_1(point_1, point_2, color);
    std::cout << line_1;
    return 0;
}
