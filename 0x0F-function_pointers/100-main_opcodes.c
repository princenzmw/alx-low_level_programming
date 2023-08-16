#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of the main function
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: nothing
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

}

/**
 * main - prints its own opcodes through print_opcodes function
 * @argc: number of arguments passed to the main function
 * @argv: array of pointers to every arguments passed
 *
 * Return: O (Always)
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
