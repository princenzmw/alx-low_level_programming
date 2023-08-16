#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for integers
 * @array: an array parameter to pass
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the first element for which the cmp function does not return 0
 *	If no element matches, return -1
 *	If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;

	}
	return (-1);
}
