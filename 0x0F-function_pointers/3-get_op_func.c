#include "3-calc.h"
#include <string.h>

/**
 * *get_op_func - Select the correct function to perform
 * the operation given
 * @s: String given
 *
 * Return: Return a function pointer of which returns an integer
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

	while (i <= 4)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);

}
