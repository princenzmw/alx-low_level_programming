#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prinko;

	va_start(prinko, n);
	for (i = 0; i < n; i++)
	{
		char *np = va_arg(prinko, char *);

		if (np == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", np);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(prinko);
}
