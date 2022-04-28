#pragma once

using BaseType = long double;
using Function = BaseType(*)(const BaseType x);

bool isEqual(const BaseType value1, const BaseType value2, const BaseType epsilon);