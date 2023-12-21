#include "HelpMath.h"
#include <cmath>

/**
 * \brief Сравнивает два значения типа double на равенство с учетом заданной точности.
 * \param value_1 Первое значение типа double.
 * \param value_2 Второе значение типа double.
 * \param precision Точность сравнения.
 * \return true, если значения value_1 и value_2 считаются равными с заданной точностью, иначе false.
*/
bool is_double_equal(const double value_1, const double value_2, const double precision)
{
    return std::abs(value_1 - value_2) < precision;
}
