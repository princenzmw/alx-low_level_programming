#include "variadic_functions.h"

void exit(int status);

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
	va_list ap;

	if (separator == NULL)
	{
		exit(1);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
