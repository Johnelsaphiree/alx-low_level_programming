#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * main - Adds positive numbers
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, flag = 0, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				flag = 1;
			}
			j++;
		}
		if (flag)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
