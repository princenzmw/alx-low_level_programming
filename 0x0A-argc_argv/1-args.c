#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main function
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
