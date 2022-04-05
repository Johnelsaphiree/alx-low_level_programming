#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);

/**
 * *str_concat - Concatenates two strings
 * @s1: String
 * @s2: String
 * Return: Contents of s1 followed by s2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *new, *s1cp, *s2cp;
	int len1 = 0, len2 = 0, i, j = 0;

	s1cp = s1;
	s2cp = s2;
	if (s1 != NULL)
		len1 = _strlen_recursion(s1cp);
	if (s2 != NULL)
		len2 = _strlen_recursion(s2cp);

	new = (char *) malloc(sizeof(char) * len1 + len2 + 1);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	for (i = len1; i < len1 + len2; i++)
	{
		new[i] = s2[j];
		j++;
	}

	new[i] = '\0';

	return (new);
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
