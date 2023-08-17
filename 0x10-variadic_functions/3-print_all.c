#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char i: integer f: float s: char *
 *          If string is NULL, print (nil).
 *          Any other char should be ignored.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list prinko;
	int i = 0;
	char *s;

	va_start(prinko, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(prinko, int));
				break;
			case 'i':
				printf("%d", va_arg(prinko, int));
				break;
			case 'f':
				printf("%f", va_arg(prinko, double));
				break;
			case 's':
				s = va_arg(prinko, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(prinko);
}
