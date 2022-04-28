#include "utility.hpp"
#include <cmath>

bool isEqual(const BaseType value1, const BaseType value2, const BaseType epsilon)
{
    return fabsl(value1 - value2) < epsilon;
}