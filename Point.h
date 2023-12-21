#pragma once
#include <iostream>
#include "HelpMath.h"

    /**
    * \struct point
    * \brief Структура, представляющая точку в двумерном пространстве.
    */
class Point
{
public:
    /**
    * \brief Конструктор по умолчанию.
    * \param value_x Значение координаты x точки.
    * \param value_y Значение координаты y точки.
    */
    Point(const double value_x, const double value_y);

    /**
    * \brief Перегруженный оператор сравнения.
    * \param lha Левый операнд.
    * \param rha Правый операнд.
    * \return true, если точки равны; false в противном случае.
    */
    friend bool operator== (const Point& lha, const Point& rha);

    /**
    * \brief Перегруженный оператор вывода в поток.
    * \param out Поток вывода.
    * \param point Точка для вывода.
    * \return Поток вывода.
    */
    friend std::ostream& operator<< (std::ostream& out, const Point& point);

    double x; 
    double y; 
};
