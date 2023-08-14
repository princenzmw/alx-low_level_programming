#include <stdio.h>
#include <stdlib.h> /* For memory allocation functions */
#include <string.h> /* For string functions */
#include "dog.h"

/**
 * new_dog - Creates a new dog with specified attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	new_dog_ptr->name = malloc(strlen(name) + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);

	/* Allocate memory and copy the owner */
	new_dog_ptr->owner = malloc(strlen(owner) + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
