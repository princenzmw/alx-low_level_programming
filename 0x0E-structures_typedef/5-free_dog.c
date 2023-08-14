#include <stdlib.h> /* For memory deallocation functions */
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the struct dog variable to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
