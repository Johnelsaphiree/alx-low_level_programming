#include "main.h"


/**
 * set_bit - Set value of a bit to 1 at given index
 * @n: Big number
 * @index: Given index
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	one = one << index;
	*n |= one;
	return (1);

}
