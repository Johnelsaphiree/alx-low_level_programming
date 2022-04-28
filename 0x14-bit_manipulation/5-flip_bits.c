#include "main.h"

/**
 * flip_bits - Number of bits you would need to flip
 * to get from one number to another
 * @n: Big Number to be flipped
 * @m: Number to reach
 *
 * Return: Bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int data;
	int ans, i;

	ans = 0;
	data = n ^ m;
	for (i = (sizeof(unsigned long int) * 8); i > 0; i--)
		if ((data >> i) & 1)
			ans++;

	return (ans);
}
