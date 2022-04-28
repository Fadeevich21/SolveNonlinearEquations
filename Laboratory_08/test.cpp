#include "pch.h"
#include "test.hpp"

TEST(SolveNonlinearEquation, Example)
{
	// Arrange
	const BaseType leftBorder = BaseType(-3);
	const BaseType rightBorder = BaseType(-1);
	const ExampleTest test(leftBorder, rightBorder);
	const BaseType epsilon = test.getEpsilon();

	const BaseType result = BaseType(-2);

	// Act
	const BaseType solve = test.solve();

	// Assert
	ASSERT_TRUE(isEqual(solve, result, epsilon));
}

TEST(SolveNonlinearEquation, Variant10_solve1)
{
	// Arrange
	const BaseType leftBorder = BaseType(-3);
	const BaseType rightBorder = BaseType(-1);
	const Variant10Test test(leftBorder, rightBorder);
	const BaseType epsilon = test.getEpsilon();

	const BaseType result = BaseType(-1);

	// Act
	const BaseType solve = test.solve();

	// Assert
	ASSERT_TRUE(isEqual(solve, result, epsilon));
}

TEST(SolveNonlinearEquation, Variant10_solve2)
{
	// Arrange
	const BaseType leftBorder = BaseType(2.5L);
	const BaseType rightBorder = BaseType(4);
	const Variant10Test test(leftBorder, rightBorder);
	const BaseType epsilon = test.getEpsilon();

	const BaseType result = BaseType(3);

	// Act
	const BaseType solve = test.solve();

	// Assert
	ASSERT_TRUE(isEqual(solve, result, epsilon));
}

TEST(SolveNonlinearEquation, Variant10_solve3)
{
	// Arrange
	const BaseType leftBorder = BaseType(4);
	const BaseType rightBorder = BaseType(10);
	const Variant10Test test(leftBorder, rightBorder);
	const BaseType epsilon = test.getEpsilon();

	const BaseType result = BaseType(5);

	// Act
	const BaseType solve = test.solve();

	// Assert
	ASSERT_TRUE(isEqual(solve, result, epsilon));
}

TEST(SolveNonlinearEquation, Variant18)
{
	// Arrange
	const BaseType leftBorder = BaseType(-3);
	const BaseType rightBorder = BaseType(-1);
	const Variant18Test test(leftBorder, rightBorder);
	const BaseType epsilon = test.getEpsilon();

	const BaseType result = BaseType(-2);

	// Act
	const BaseType solve = test.solve();

	// Assert
	ASSERT_TRUE(isEqual(solve, result, epsilon));
}