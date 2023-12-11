#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurence of the substring @needle
 * in the string @haystack
 * @haystack: input string to find matching substrings
 * @needle: subtring to search for
 * Return: pointer to the beginning of the located substring.
 *		or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	*/
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (*n == '\0') /* check for the end of the needle */
		{
			return (h);
		}
		haystack = h + 1;
	}
	return ('\0');
}
