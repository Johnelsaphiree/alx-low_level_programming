#include <stdlib.h>
#include <stdio.h>


/**
 * main - Print opcodes from main
 * @argc: size of argv
 * @argv: Array of strings
 *
 * Return: 0 on success
 */
int main(int argc, char  **argv)
{
	int num, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i != num - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
