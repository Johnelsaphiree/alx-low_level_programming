#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
<<<<<<< HEAD
	else
		_putchar('\n');
=======
	_putchar(*s);
	_puts_recursion(s + 1);
>>>>>>> 74885f06e81c2ca5cf628d76b34f131b2e6ffb8a
}
