#include "SolveNonlinearEquationsData.hpp"

SolveNonlinearEquationsData::SolveNonlinearEquationsData(
	const Function* const function, const Function* const functionFirstOrder, const Function* const functionSecondOrder,
	const BaseType leftBorder, const BaseType rightBorder, const BaseType epsilon)
	: function_(const_cast<Function*>(function)), functionFirstOrder_(const_cast<Function*>(functionFirstOrder)), functionSecondOrder_(const_cast<Function*>(functionSecondOrder)), leftBorder_(leftBorder), rightBorder_(rightBorder), epsilon_(epsilon)
{
}

SolveNonlinearEquationsData::~SolveNonlinearEquationsData()
{
}

Function SolveNonlinearEquationsData::getFunction() const
{
	return *(this->function_);
}

Function SolveNonlinearEquationsData::getFunctionFirstOrder() const
{
	return *(this->functionFirstOrder_);
}

Function SolveNonlinearEquationsData::getFunctionSecondOrder() const
{
	return *(this->functionSecondOrder_);
}

BaseType SolveNonlinearEquationsData::getLeftBorder() const
{
	return this->leftBorder_;
}

BaseType SolveNonlinearEquationsData::getRightBorder() const
{
	return this->rightBorder_;
}

BaseType SolveNonlinearEquationsData::getEpsilon() const
{
	return this->epsilon_;
}