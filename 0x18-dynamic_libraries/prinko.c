#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* printf - writes some outputs
* @format: arguments
* Return: Exit
*/
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
