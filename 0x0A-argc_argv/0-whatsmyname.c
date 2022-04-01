#include <stdlib.h>
#include <stdio.h>


/**
 * main - Print the name of the executable file
 * @argc: size of *argv
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
