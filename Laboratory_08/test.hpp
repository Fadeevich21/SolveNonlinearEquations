#pragma once

#include "SolveNonlinearEquations/SolveNonlinearEquations.hpp"
#include "CombinedMethod/CombinedMethod.hpp"
#include "utility/utility.hpp"

class Test
{
private:
	const SolveNonlinearEquationsData* data_;
	const AbstractMethodSolveNonlinearEquations* method_;
	const SolveNonlinearEquations* solver_;

public:
	Test() = default;

	BaseType solve() const
	{
		return this->solver_->solve();
	};

	void init(const Function* const function, const Function* const functionFirstOrder, const Function* const functionSecondOrder,
			  const BaseType leftBorder, const BaseType rightBorder, const BaseType epsilon)
	{
		this->data_ = new SolveNonlinearEquationsData(function, functionFirstOrder, functionSecondOrder,
													  leftBorder, rightBorder, epsilon);
		this->method_ = new CombinedMethod;
		this->solver_ = new SolveNonlinearEquations(this->data_, this->method_);
	}

	BaseType getEpsilon() const
	{
		return this->data_->getEpsilon();
	}
};

class ExampleTest : public Test
{
private:
	const Function* const func_ = new Function([](const BaseType x)
	{
		return powl(x, 2) - 4;
	});
	const Function* const funcFirstOrder_ = new Function([](const BaseType x)
	{
		return 2 * x;
	});
	const Function* const funcSecondOrder_ = new Function([](const BaseType x)
	{
		return BaseType(2);
	});
	const BaseType epsilon_ = BaseType(0.01L);
	const BaseType leftBorder_;
	const BaseType rightBorder_;

private:
	void init()
	{
		Test::init(this->func_, this->funcFirstOrder_, this->funcSecondOrder_,
				   this->leftBorder_, this->rightBorder_, this->epsilon_);
	}

public:
	ExampleTest(const BaseType leftBorder, const BaseType rightBorder)
		: leftBorder_(leftBorder), rightBorder_(rightBorder)
	{
		init();
	}
};

class Variant10Test : public Test
{
private:
	const Function* func_ = new Function([](const BaseType x)
	{
		return powl(x, 3) - 7 * powl(x, 2) + 7 * x + 15;
	});
	const Function* funcFirstOrder_ = new Function([](const BaseType x)
	{
		return 3 * powl(x, 2) - 14 * x + 7;
	});
	const Function* funcSecondOrder_ = new Function([](const BaseType x)
	{
		return 6 * x - 7;
	});
	const BaseType epsilon_ = BaseType(0.0001L);
	const BaseType leftBorder_;
	const BaseType rightBorder_;

private:
	void init()
	{
		Test::init(this->func_, this->funcFirstOrder_, this->funcSecondOrder_,
				   this->leftBorder_, this->rightBorder_, this->epsilon_);
	}

public:
	Variant10Test(const BaseType leftBorder, const BaseType rightBorder)
		: leftBorder_(leftBorder), rightBorder_(rightBorder)
	{
		init();
	}
};

class Variant18Test : public Test
{
private:
	const Function* func_ = new Function([](const BaseType x)
	{
		return powl(x, 3) - 6 * powl(x, 2) - 4 * x + 24;
	});
	const Function* funcFirstOrder_ = new Function([](const BaseType x)
	{
		return 3 * powl(x, 2) - 12 * x - 4;
	});
	const Function* funcSecondOrder_ = new Function([](const BaseType x)
	{
		return 6 * x - 12;
	});
	const BaseType epsilon_ = BaseType(0.0001L);
	const BaseType leftBorder_;
	const BaseType rightBorder_;

private:
	void init()
	{
		Test::init(this->func_, this->funcFirstOrder_, this->funcSecondOrder_,
				   this->leftBorder_, this->rightBorder_, this->epsilon_);
	}

public:
	Variant18Test(const BaseType leftBorder, const BaseType rightBorder)
		: leftBorder_(leftBorder), rightBorder_(rightBorder)
	{
		init();
	}
};