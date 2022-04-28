#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: nothing
 */
int get_endianness(void)
{
	unsigned int i = 0;
	char *c = (char *)&i;

	if (*c)
		return (0);
	else
		return (1);
}
