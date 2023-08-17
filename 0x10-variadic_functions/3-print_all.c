#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 *	c: char i: integer f: float s: char *
 *	if string is NULL print (nil)
 *	instead any char should be ignored
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list prinko;
	const char *c;
	char *separator = "";

	va_start(prinko, format);

	for (c = format; *c != '\0'; ++c)
	{
		switch (*c)
		{
			case 'c':
				printf("%s%c", separator, va_arg(prinko, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(prinko, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(prinko, double));
				break;
			case 's':
				printf("%s%s", separator, va_arg(prinko, char *));
				break;
			default:
				continue;
		}
		separator = ", ";
	}

	printf("\n");
	va_end(prinko);
}
