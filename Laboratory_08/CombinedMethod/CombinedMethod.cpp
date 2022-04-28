#include "CombinedMethod.hpp"
#include <cmath>

bool checkStopCondition(const BaseType xx, const BaseType xk, const BaseType epsilon)
{
	return fabsl(xx - xk) <= epsilon;
}

BaseType getNextApproximationMethodChord(const Function& func, const BaseType xx, const BaseType t)
{
	BaseType nextApproximation = xx - func(xx) * (t - xx) / (func(t) - func(xx));

	return nextApproximation;
}

BaseType getNextApproximationMethodTangent(const Function& func, const Function& funcFirstOrder, const BaseType xk)
{
	BaseType nextApproximation = xk - func(xk) / funcFirstOrder(xk);

	return nextApproximation;
}

BaseType CombinedMethod::solve(const SolveNonlinearEquationsData* const data) const
{
	Function func = data->getFunction();
	Function funcFirstOrder = data->getFunctionFirstOrder();
	Function funcSecondOrder = data->getFunctionSecondOrder();
	BaseType a = data->getLeftBorder();
	BaseType b = data->getRightBorder();
	BaseType epsilon = data->getEpsilon();

	BaseType xx, xk;
	if (func(a) * funcSecondOrder(a) > 0)
	{
		xx = b;
		xk = a;
	}
	else
	{
		xx = a;
		xk = b;
	}

	BaseType& t = xk;
	do
	{
		xk = getNextApproximationMethodTangent(func, funcFirstOrder, xk);
		xx = getNextApproximationMethodChord(func, xx, t);
	}
	while (!checkStopCondition(xx, xk, epsilon));

	BaseType result = (xk + xx) / 2;

	return result;
}
