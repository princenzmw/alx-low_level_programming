#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @n
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte
 * @b: the character to fill the area
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s;
	unsigned char value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}

	return (s);
}
