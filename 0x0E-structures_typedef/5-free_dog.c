#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the struct dogs.
 * @d: the structure to free.
 */
void free_dog(dog_t *d)
{
	free(d);
}
