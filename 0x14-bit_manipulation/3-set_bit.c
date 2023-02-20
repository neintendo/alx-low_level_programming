#include "main.h"
#include <limits.h>
#include <stdlib.h>

int *int_to_bin(unsigned long int n);
unsigned int bin_to_int(int *b, int index);

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the integer to modify.
 * @index: the index in @n to change to 1.
 *
 * Return: returns 1 on success, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = *n;
	int *converted;

	if (index > 32)
		return (-1);

	converted = malloc(sizeof(int) * 32);
	if (converted == NULL)
		return (1);

	converted = int_to_bin(x);

	*n = bin_to_int(converted, index);

	return (1);
}

/**
 * int_to_bin - converts an integer to binary.
 * @n: the integer to convert.
 *
 * Return: returns binary form of @n.
 */
int *int_to_bin(unsigned long int n)
{
	unsigned long int max = 549755813888;
	int i;
	int inx = 0;
	int *to_convert;
	int *error;

	error = malloc(sizeof(int) * 1);
	if (error == NULL)
		return (NULL);
	error[0] = '1';

	to_convert = malloc(sizeof(int) * 32);
	if (to_convert == NULL)
		return (error);

	if (n == ULONG_MAX)
	{
		for (i = 0; i < 64; i++)
		{
			to_convert[inx] = '1';
			inx++;
		}
		return (0);
	}
	if (n == 0 || n == '\0')
	{
		to_convert[inx] = '0';
		inx++;
	}

	while (n < max)
		max *= 0.5;

	while (max > 0)
	{
		n -= max;
		to_convert[inx] = '1';
		inx++;
		max *= 0.5;

		while (max > n)
		{
			to_convert[inx] = '0';
			inx++;
			max *= 0.5;
		}
	}

	return (to_convert);
}

/**
 * bin_to_int - converts a binary number to an unsigned int.
 * @b: the binary number to convert.
 * @index: the index in @b to change to 1.
 *
 * Return: returns unsigned int form of @b.
 */
unsigned int bin_to_int(int *b, int index)
{
	int *rev;
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
	reversed[index] = 1;

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
