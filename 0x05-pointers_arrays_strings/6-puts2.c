#include "main.h"

/**
 * puts2 - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
int j;

	for (j = 0; *(str + j) != '\0'; j++)
	{
		if (j % 2 == 0)
		_putchar(*(str + j));
	}
_putchar('\n');
}
