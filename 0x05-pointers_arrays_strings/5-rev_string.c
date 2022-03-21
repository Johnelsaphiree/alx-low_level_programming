#include "main.h"

/**
 * rev_string - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
char buff[500];
int i = 0, j, pos = 0;

while (*(s + i) != '\0')
{
	buff[i] = *(s + i);
	i++;
}
for (j = (i - 1); j >= 0; j--)
{
	*(s + pos) = buff[j];
	pos++;
}
}
