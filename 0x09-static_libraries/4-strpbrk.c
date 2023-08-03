#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string @s of any
 * of the bytes in the string @accept
 * @s: a pointer to input string.
 * @accept: pointer to string we searching for in @s
 * Return: pointer to the byte in @s matching one of bytes in @accept.
 *		or NULL if no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
