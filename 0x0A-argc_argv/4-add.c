#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers entered and print result.
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main function
 * Return: 0 : (Success)
 *	or 1 If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int sum, num, digit;

	sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
