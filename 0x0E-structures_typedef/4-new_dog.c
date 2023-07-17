#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: the dog's name.
 * @age: dog's age.
 * @owner: the dog's owner.
 *
 * Return: a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(name));
	owner_copy = malloc(sizeof(owner));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	name_copy = name;
	owner_copy = owner;

	new_dog->name = name_copy;
	new_dog->owner = owner_copy;
	new_dog->age = age;

	return (new_dog);
}
