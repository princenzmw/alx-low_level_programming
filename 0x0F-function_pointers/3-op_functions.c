#include "3-calc.h"

/**
 * op_add - adds integers a and b
 * @a: first number Addend 1
 * @b: second number Addend 2
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts int b from int a
 * @a: first number Minuend
 * @b: second number Subtrahend
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first number Multiple
 * @b: second number Multiplier
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number Dividend
 * @b: second number Divisor
 *
 * Return: integer Quotient of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the remainder (Modulo) of the division of a by b
 * @a: first number Dividend
 * @b: second number Divisor
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
