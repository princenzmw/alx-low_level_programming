/* 0-binary_to_uint.c */
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string that contains the binary number.
 *
 * Return: The converted decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int decimalNum = 0;

	if (!b)
	{
		return (0);
	}

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
		{
			return (0);
		}
		decimalNum = 2 * decimalNum + (b[count] - '0');
	}

	return (decimalNum);
}
