#include "main.h"

/**
 * get_bit - Get the value of a bit at given index
 * @n: Big decimal number
 * @index: Given index
 *
 * Return: Bit at given index (int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	n = (n >> index) & 1;
	return (n);
}
