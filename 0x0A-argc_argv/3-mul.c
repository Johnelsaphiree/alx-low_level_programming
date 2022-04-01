#include <stdlib.h>
#include <stdio.h>


/**
 * main - Multiplies two numbers
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
