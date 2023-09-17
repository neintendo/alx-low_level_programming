#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: the array in which to search the integer.
 * @size: the size of the @array.
 * @cmp: a function to compare an integer in @array.
 *
 * Return: returns 0 on success, -1 on error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size <= 0 || a == size || array == NULL || (*cmp) == NULL)
		return (-1);

	for (; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
		if (a == size - 1)
			return (-1);
	}

	return (0);
}
