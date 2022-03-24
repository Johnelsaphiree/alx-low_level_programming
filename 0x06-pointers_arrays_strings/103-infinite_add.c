#include "main.h"
#include <stdlib.h>

/**
 * print_number - Prints an integer with only _putchar
 *
 * @n: Integer parameter
 */
void print_number(int n)
{
	int i, l, x, h, ans, consN, superN;

	if (n < 0)
		_putchar('-');

	consN = n, ans = n, superN = n;

	if (n < 0)
		for (l = 0; superN < 0; ++l)
			superN /= 10;
	else
		for (l = 0; superN > 0; ++l)
			superN /= 10;

	h = l - 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			x = h;
			while (x)
			{
				ans = ans / 10;
				x--;
			}
			ans =  ans % 10;
			_putchar(abs(ans)  + '0');
			ans = consN;
			h--;
		}
	}
}
