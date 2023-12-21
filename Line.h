#pragma once
#include <iostream>
#include "Point.h"
#include "Color.h"
#include <memory>

/**
 * \class line
 * \brief Класс, представляющий линию, определенную двумя точками и цветом.
 */
class Line
{
public:
    /**
     * \brief Конструктор класса line.
     * \param point_1 Первая точка линии.
     * \param point_2 Вторая точка линии.
     * \param color Цвет линии.
     */
    Line(std::shared_ptr<Point> point_1, std::shared_ptr<Point> point_2, std::shared_ptr<Color> color);

    /**
     * \brief Получает первую точку линии.
     * \return Первая точка линии.
     */
    std::shared_ptr<Point> get_point_1() const;

    /**
     * \brief Получает вторую точку линии.
     * \return Вторая точка линии.
     */
    std::shared_ptr<Point> get_point_2() const;

    /**
     * \brief Получает цвет линии.
     * \return Цвет линии.
     */
    std::shared_ptr<Color> get_color() const;

    /**
     * \brief Перегруженный оператор вывода в поток.
     * \param out Поток вывода.
     * \param line Линия для вывода.
     * \return Поток вывода.
     */
    friend std::ostream& operator<< (std::ostream& out, const Line& line);

private:

    std::shared_ptr<Color> color;
    std::shared_ptr<Point> point_1;
    std::shared_ptr<Point> point_2;
};
