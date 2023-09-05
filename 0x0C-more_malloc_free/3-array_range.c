#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: a pointer to the newly created array or NULL on error.
 */
int *array_range(int min, int max)
{
	int *arr_int;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min;
	if (max == min)
		size = 1;

	arr_int = malloc(size * sizeof(int));
	if (arr_int == NULL)
		return (NULL);

	if (max == min)
	{
		arr_int[0] = min;
		return (arr_int);
	}

	for (a = 0; min < max; a++, min++)
		arr_int[a] = min;

	return (arr_int);
}
