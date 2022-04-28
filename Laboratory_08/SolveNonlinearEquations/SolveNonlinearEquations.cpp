#include "SolveNonlinearEquations.hpp"

SolveNonlinearEquations::SolveNonlinearEquations(const SolveNonlinearEquationsData* const data, const AbstractMethodSolveNonlinearEquations* const method)
	: data_(const_cast<SolveNonlinearEquationsData *>(data)), method_(const_cast<AbstractMethodSolveNonlinearEquations *>(method))
{
}

SolveNonlinearEquations::~SolveNonlinearEquations()
{
	delete this->data_;
	this->data_ = nullptr;

	delete this->method_;
	this->method_ = nullptr;
}

void SolveNonlinearEquations::setData(const SolveNonlinearEquationsData* const data)
{
	delete this->data_;
	this->data_ = const_cast<SolveNonlinearEquationsData * >(data);
}

void SolveNonlinearEquations::setMethod(const AbstractMethodSolveNonlinearEquations* const method)
{
	delete this->method_;
	this->method_ = const_cast<AbstractMethodSolveNonlinearEquations*>(method);
}

BaseType SolveNonlinearEquations::solve() const
{
	return this->method_->solve(this->data_);
}
