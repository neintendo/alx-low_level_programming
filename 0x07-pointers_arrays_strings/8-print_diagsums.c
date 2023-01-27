#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: the array to print from.
 * @size: the size of @a.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int act_size = size * size;
	int fill;
	int jump;
	int *arr, *arr_rev;
	int sum = 0, sum2 = 0;

	jump = (act_size / size);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		exit(0);
	arr_rev = malloc(sizeof(int) * size);
	if (arr_rev == NULL)
		exit(0);

	for (; *a == '\0'; a++)
	{
		for (i = 0, fill = 0; i <= act_size - 1; i++, fill++)
		{
			arr[fill] = a[i];
			i = i + jump;
		}
	}
	for (a = a - 1; *a == '\0'; a++)
	{
		for (i = jump - 1, fill = 0; i <= act_size - 1; i++, fill++)
		{
			arr_rev[fill] = a[i];
			i = i + (jump - 2);
		}
	}

	for (fill = 0; fill < size; fill++)
		sum = sum + arr[fill];
	for (fill = 0; fill < size; fill++)
		sum2 = sum2 + arr_rev[fill];

	printf("%d, ", sum);
	printf("%d\n", sum2);
}
