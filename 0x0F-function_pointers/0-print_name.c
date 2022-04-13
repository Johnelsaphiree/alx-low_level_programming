#include "function_pointers.h"

/**
 * print_name - Execute the function passed by argument
 * @name: String name
 * @f: Function void that receives as argument a string
 *
 * Return: nothing;
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
