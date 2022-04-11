#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Describe a dog and some additional data
 * @name: String name of the dog
 * @age: float age of the dog
 * @owner: String name of the owner of the dog
 *
 * Description: Dog and owner data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
