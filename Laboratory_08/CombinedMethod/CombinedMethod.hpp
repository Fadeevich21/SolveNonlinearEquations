#pragma once

#include "..\AbstractMethodSolveNonlinearEquations\AbstractMethodSolveNonlinearEquations.hpp"

class CombinedMethod : public AbstractMethodSolveNonlinearEquations
{
public:
	BaseType solve(const SolveNonlinearEquationsData* const data) const;
};

