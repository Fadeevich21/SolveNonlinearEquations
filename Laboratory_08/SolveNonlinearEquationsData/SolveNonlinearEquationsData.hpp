#pragma once

#include "..\utility\utility.hpp"

class SolveNonlinearEquationsData
{
private:
	Function* function_;
	Function* functionFirstOrder_;
	Function* functionSecondOrder_;
	BaseType leftBorder_;
	BaseType rightBorder_;
	BaseType epsilon_;

public:
	SolveNonlinearEquationsData(const Function* const function, const Function* const functionFirstOrder, const Function* const functionSecondOrder, const BaseType leftBorder, const BaseType rightBorder, const BaseType epsilon);
	~SolveNonlinearEquationsData();

	Function getFunction() const;
	Function getFunctionFirstOrder() const;
	Function getFunctionSecondOrder() const;
	BaseType getLeftBorder() const;
	BaseType getRightBorder() const;
	BaseType getEpsilon() const;
};

