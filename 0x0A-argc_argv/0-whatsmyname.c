#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main function
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
