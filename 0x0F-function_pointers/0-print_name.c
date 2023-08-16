#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a char pointer to name as argument
 * @f: a function pointer to pass as argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
