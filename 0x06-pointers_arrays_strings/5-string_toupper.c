#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: Pointer to a char array char[]
 * Return: string uppercase
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
