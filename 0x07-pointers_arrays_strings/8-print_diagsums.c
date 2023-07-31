#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers. (input pointer)
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < (size * size); index++)
	{
		if (index % (size + 1) == 0)
			S1 += a[index];
		if (index % (size - 1) == 0 && index != 0 && index < size * size - 1)
			S2 += a[index];
	}
	printf("%d, %d\n", sum1, sum2);
}
