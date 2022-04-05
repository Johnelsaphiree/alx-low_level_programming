#include "main.h"
#include <stdlib.h>

int w_count(char *str, int size);
int _strlen_recursion(char *s);


/**
 * **strtow - Splits a string in two words
 * @str: String
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	char *strcp, **strcon;
	int len = 0, noWords;

	if (str == NULL || str[0] == 0)
		return (NULL);

	strcp = str;
	len = _strlen_recursion(strcp);
	noWords = w_count(str, len);

	if (noWords < 1)
		return (NULL);

	strcon = malloc(noWords + 1 * sizeof(char *));

	strcon[0] = malloc(sizeof(char) * 1 + 1);

	return (strcon);
}

/**
 * w_count - Count the total words in a string
 * @str: String
 * @size: length of the string
 * Return: Count of words Integer
 */
int w_count(char *str, int size)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			while (i < size && str[i] != ' ')
				i++;
			count++;
		}
	}

	return (count);
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
