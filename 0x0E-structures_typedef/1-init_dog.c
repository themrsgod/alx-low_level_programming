#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * struct dog - new structure.
 * @d: pointer.
 * @name: dog name to initialize
 * @age: dog age to initialize
 * @owner: dog owner to initialize
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
