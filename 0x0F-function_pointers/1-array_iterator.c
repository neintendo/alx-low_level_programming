#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates a given array.
 *
 * @array: the array to iterate.
 * @size: the size of the array.
 * @action: the pointer to the function that returns array elements.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int index;

	if (array != NULL && (*action) != NULL)
	{
		for (index = 0; index < size; index++)
			(*action)(array[index]);
	}
	else
		exit(0);
}
