#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prinko;

	va_start(prinko, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(prinko, int);

		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(prinko);
}
