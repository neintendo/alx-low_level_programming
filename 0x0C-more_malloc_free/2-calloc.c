#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int sz = nmemb * size;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	array = malloc(sz);
	if (array == NULL)
		return (NULL);

	memset(array, 0, sz);

	return (array);
}
