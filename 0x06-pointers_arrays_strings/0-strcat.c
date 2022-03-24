#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: String of destiny, pointer to a char[]
 * @src: Source string, pointer to a char[]
 * Return: Char[] concatenated
 */
char *_strcat(char *dest, char *src)
{
	char *d;
	char *s;
	int counterS = 0, counterD = 0,  i, j;

	for (s = src; *s != '\0'; s++)
		counterS++;
	for (d = dest; *d != '\0'; d++)
		counterD++;

	j = counterD;
	for (i  = 0; i < counterS; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
