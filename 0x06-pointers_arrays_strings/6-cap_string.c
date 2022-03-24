#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string
 * @a: Pointer to a char array char[]
 * Return: string capitalized
 */
char *cap_string(char *a)
{
	int i, j;
	char separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (a[i] == separators[j])
			{
				if (a[i + 1] == '\0')
					break;

				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] -= 32;
			}
		}

	}

	return (a);
}
