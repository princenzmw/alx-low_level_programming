#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 *
 * followed by a new line
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
