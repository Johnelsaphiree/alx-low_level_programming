#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen_recursion(char *s);

/**
 * *new_dog - Create a new dog and make a copy of the data
 * @name: String name given
 * @age: Float, age in years
 * @owner: String, name of the owner
 *
 * Return: Pointer to the structure with the data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	char *name_new, *owner_new;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	name_new = malloc(_strlen_recursion(name) + 1 * sizeof(char));
	if (name_new == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	_strcpy(name_new, name);

	owner_new = malloc(_strlen_recursion(owner) + 1 * sizeof(char));

	if (owner_new == NULL)
	{
		free(name_new);
		free(dog_new);
		return (NULL);
	}

	_strcpy(owner_new, owner);

	dog_new->name = name_new;
	dog_new->age = age;
	dog_new->owner = owner_new;

	return (dog_new);
}

/**
 * *_strcpy - Copy the string pointed
 * @dest: Pointer of a char[] variable
 * @src: Pointer of a char[] variable
 *
 * Return: Copy of the pointer char
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	dest -= counter;
	return (dest);
}

/**
 * _strlen_recursion - Length of a string
 *@s: char pointer
 *Return: Integer variable
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	return (0);
}
