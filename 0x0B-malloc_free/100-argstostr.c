#include "main.h"
#include <stdlib.h>

int _strlen_recursion(char *s);

/**
 * *argstostr - Concatenates all the arguments of
 * your program
 * @ac: Integer size of av
 * @av: Array of strings
 * Return: String
 */
char *argstostr(int ac, char **av)
{
	char *str, **cpav;
	int i, len = 0, j = 0, k = 0;

	cpav = av;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen_recursion(cpav[i]);

	str = (char *) malloc(sizeof(char) * len + ac + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			str[j] = av[i][k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}

	return (str);
}


/**
 * _strlen_recursion - Length of a string
 * @s: char pointer
 * Return: Integer variable
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	return (0);
}
