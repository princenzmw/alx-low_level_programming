#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: input for Name of the dog
 * @age: input for Age of the dog
 * @owner: input for Name of the dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name; /* (*d).name = name */
		d->age = age; /* (*d).age = age */
		d->owner = owner; /* (*d).owner = owner */
	}
}
