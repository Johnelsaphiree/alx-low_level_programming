#include "main.h"
#include <stdio.h>
/**
 * *rot13 - Encode an entire string using rot13
 * @a: Pointer to a char array char[]
 * Return: string encoded into 1337
 */
char *rot13(char *a)
{
	int i = 0, j;
	char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *y = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		j = 0;
		while (x[j] != '\0')
		{
			if (a[i] == x[j])
			{
				a[i] = y[j];
				break;
			}
			j++;
		}
		i++;
	}


	return (a);
}
