#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number the get the bit from.
 * @index: the index to return a value from.
 *
 * Return: returns the value of the bit at index or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 549755813888;
	unsigned int i = 0;
	int value = 0;

	if (n == ULONG_MAX)
		return (1);

	if (n == 0 || n == '\0')
		return (-1);

	while (n < max)
		max *= 0.5;

	while (max > 0 && i < index)
	{
		i++;
		n -= max;
		value = 1;
		max *= 0.5;

		while (max > n)
		{
			i++;
			value = 0;
			max *= 0.5;
		}
	}
	return (value);
}
