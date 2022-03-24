#include "main.h"
/**
 * *leet - Encode an entire string into 1337
 * @a: Pointer to a char array char[]
 * Return: string encoded into 1337
 */
char *leet(char *a)
{
	int i = 0, j;
	char x[] = {'a', 'e', 'o', 't', 'l'};
	char y[] = {'A', 'E', 'O', 'T', 'L'};
	char z[] = {'4', '3', '0', '7', '1'};

	while (a[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == x[j] || a[i] == y[j])
			{
				a[i] = z[j];
			}
		}
		i++;
	}


	return (a);
}
