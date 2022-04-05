#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Function that creates arrays of chars
 * @size: Size of the char
 * @c: Char to be initialized
 * Return: Array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptc = (char *) malloc(size * (sizeof(char)));

	if (ptc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptc[i] = c;

	return (ptc);
}
