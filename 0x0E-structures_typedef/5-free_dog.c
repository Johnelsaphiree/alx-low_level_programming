#include "dog.h"

/**
 * free_dog - Free the data of the dog and the dog
 * @d: dog pointer to the structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
