#include <stdlib.h>

/**
 * create_array - creates an array of @size,
 *		  initialized by @c.
 * @c: the character to initialize the array with.
 * @size: the size of the array to create.
 *
 * Return: returns the array on success, NULL if
 *	   size == 0, or on error of memory allocation.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
