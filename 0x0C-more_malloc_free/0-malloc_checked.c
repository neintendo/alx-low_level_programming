#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes of to be allocated.
 *
 * Return: returns pointer to the allocated memory on success.
*/
void *malloc_checked(unsigned int b)
{
	void *allocated = malloc(b);

	if (allocated == NULL)
		exit(98);

	return (allocated);
}
