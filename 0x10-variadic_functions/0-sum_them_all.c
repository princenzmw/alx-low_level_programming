#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: one of the parameters to pass
 * Return: sum, or 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	sum = 0;

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
