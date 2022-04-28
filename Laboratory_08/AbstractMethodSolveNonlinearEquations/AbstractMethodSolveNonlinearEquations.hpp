#pragma once

#include "..\SolveNonlinearEquationsData\SolveNonlinearEquationsData.hpp"

class AbstractMethodSolveNonlinearEquations
{
public:
	AbstractMethodSolveNonlinearEquations();
	virtual ~AbstractMethodSolveNonlinearEquations();

	virtual BaseType solve(const SolveNonlinearEquationsData* const data) const = 0;
};
