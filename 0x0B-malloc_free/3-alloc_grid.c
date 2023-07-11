#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2D array of integers.
 * @width: the number of columns to create.
 * @height: the numbers of rows to create.
 *
 * Return: returns pointer to 2D array on success or
 *	   NULL on error.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);

		if (array[a] == NULL)
		{
			for (; a >= 0; a--)
				free(array[a]);

			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (i = 0; i < width; i++)
		{
			array[a][i] = 0;
		}
	}

	return (array);
}
