#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number to convert.
 *
 * Return: the converted number, or 0 if @b is not a binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	const char *rev;
	unsigned int sum, count = 0, binary = 1, a = 0, c = 0;
	int *reversed, *sum_arr;

	if (b == NULL)
		return (0);
	rev = b;
	while (*rev)
		rev++, count++;

	reversed = malloc(sizeof(int *) * count);
	sum_arr = malloc(sizeof(int *) * count);
	if (sum_arr == NULL || reversed == NULL)
		return (0);

	while (count != 0)
	{
		rev--, count--;
		if (*rev == '1')
			reversed[a] = 1;
		else if (*rev == '0')
			reversed[a] = 0;
		else
			return (0);
		a++;
	}
	while (count < a)
	{
		while (reversed[count] == 1)
		{
			sum_arr[c] = binary;
			binary *= 2;
			c++, count++;
		}
		count++, binary *= 2;
	}

	for (sum = 0, c = 0; c < a; c++)
		sum += sum_arr[c];
	return (sum);
}
