#include "main.h"
#include <stdlib.h>


/**
 * **alloc_grid - Pointer to a 2 dimensionar array of integers
 * @width: Integer width of the matrix
 * @height: Integer height  of the matrix
 * Return: Two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **) malloc(height * (sizeof(int *)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	if (*ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
