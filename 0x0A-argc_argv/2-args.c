#include <stdlib.h>
#include <stdio.h>


/**
 * main - Print all arguments
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
