#include "main.h"


/**
 * clear_bit - Set value of a bit to 0 at given index
 * @n: Big number
 * @index: Given index
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int zero = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	zero = zero << index;
	zero = ~zero;
	*n &= zero;

	return (1);
}
