#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 *		a parameter on each element of an array
 * @array: an array parameter to pass
 * @size: a size of the array
 * @action: a pointer to the function to print decimal or hex nbrs
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
