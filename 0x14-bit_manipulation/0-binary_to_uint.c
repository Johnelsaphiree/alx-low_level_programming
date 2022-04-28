#include "main.h"

int _strlen(const char *s);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number in string
 *
 * Return: The converted number to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, base = 1;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			ans += base;
		base *= 2;
	}
	return (ans);
}


/**
 * _strlen - Length of the string
 *
 * @s: Pointer of char variable
 * Return: Integer value
 */
int _strlen(const char *s)
{
	const char *t;
	int counter = 0;

	for (t = s; *t != '\0'; t++)
		counter++;
	return (counter);
}
