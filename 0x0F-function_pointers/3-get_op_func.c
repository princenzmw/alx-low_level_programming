#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - the function that selects the correct function to
 *		perform the operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to function corresponding to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
