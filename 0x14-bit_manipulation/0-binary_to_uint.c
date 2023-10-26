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
	unsigned int decimalNum = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		decimalNum = (decimalNum << 1) | (*b - '0');
		b++;
	}
	return (decimalNum);
}
