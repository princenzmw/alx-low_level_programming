#include "main.h"
/**
 * _memcpy - copies n bytes form the memory area src
 * to memory area dest
 * @dest: buffer where we will copy to
 * @src: source code to copy
 * @n: how many bytes of @src to copy
 * Return: dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
