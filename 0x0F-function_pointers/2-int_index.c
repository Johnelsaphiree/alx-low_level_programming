#include "function_pointers.h"


/**
 * int_index - Print the index of an array
 * @array: Array of integers given
 * @size: Size of the array
 * @cmp: Function to compare the data in the array
 *
 * Return: Int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *myarray = array, i, ans;

	if (size <=  0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ans = cmp(myarray[i]);

		if (ans)
			return (i);
	}

	return (-1);
}
