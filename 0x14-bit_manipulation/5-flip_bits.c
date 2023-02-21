#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int *int_to_bin(unsigned long int n);
int bin_len(int *bin);

/**
 * flip_bits - prints the number of bits you would need to flip
 *	       to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n_len, m_len, diff, i, k;
	int *n_cmp, *m_cmp, *n_conv, *m_conv;

	n_conv = int_to_bin(n);
	m_conv = int_to_bin(m);

	n_len = bin_len(n_conv);
	m_len = bin_len(m_conv);

	if (n_len > m_len)
	{
		n_cmp = malloc(sizeof(int) * n_len);
		if (n_cmp == NULL)
			return (1);
		m_cmp = malloc(sizeof(int) * n_len);
		if (m_cmp == NULL)
			return (1);

		diff = n_len - m_len;
		for (i = 0; i < diff; i++)
			m_cmp[i] = '0';
		n_cmp = n_conv;
		for (k = 0; k < m_len; k++, i++)
			m_cmp[i] = m_conv[k];
	}
	else if (m_len > n_len)
	{
		n_cmp = malloc(sizeof(int) * m_len);
		if (n_cmp == NULL)
			return (1);
		m_cmp = malloc(sizeof(int) * m_len);
		if (m_cmp == NULL)
			return (1);

		diff = m_len - n_len;
		for (i = 0; i < diff; i++)
			n_cmp[i] = '0';
		m_cmp = m_conv;
		for (k = 0; k < n_len; k++, i++)
			n_cmp[i] = n_conv[k];
	}
	else
	{
		n_cmp = malloc(sizeof(int) * m_len);
		if (n_cmp == NULL)
			return (1);
		m_cmp = malloc(sizeof(int) * m_len);
		if (m_cmp == NULL)
			return (1);
		for (k = 0; k < n_len; k++)
		{
			n_cmp[k] = n_conv[k];
			m_cmp[k] = m_conv[k];
		}
	}
	i = 0;
	while (*n_cmp)
	{
		if (*n_cmp != *m_cmp)
			i++;
		n_cmp++;
		m_cmp++;
	}
	return (i);
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
 * bin_len - finds the length of a binary number.
 * @bin: the binary number.
 *
 * Return: returns the length in integer form of @bin.
 */
int bin_len(int *bin)
{
	int i = 0;

	while (*bin)
	{
		bin++;
		i++;
	}

	return (i);
}
