#pragma once

#include "..\SolveNonlinearEquationsData\SolveNonlinearEquationsData.hpp"
#include "..\AbstractMethodSolveNonlinearEquations\AbstractMethodSolveNonlinearEquations.hpp"
#include "..\utility\utility.hpp"

class SolveNonlinearEquations
{
private:
	SolveNonlinearEquationsData *data_;
	AbstractMethodSolveNonlinearEquations *method_;

public:
	SolveNonlinearEquations(const SolveNonlinearEquationsData* const data, const AbstractMethodSolveNonlinearEquations* const method);
	~SolveNonlinearEquations();

	void setData(const SolveNonlinearEquationsData * const data);
	void setMethod(const AbstractMethodSolveNonlinearEquations* const method);

	BaseType solve() const;
};