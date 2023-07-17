#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variables of the type dog.
 *
 * @d: the dog to be initialized.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
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
