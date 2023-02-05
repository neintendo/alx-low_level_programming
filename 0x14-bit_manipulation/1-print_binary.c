#include "main.h"
#include <limits.h>

/**
 * print_binary - prints the binary representation of @n.
 * @n: the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int max = 549755813888;
	int i;

	if (n == ULONG_MAX)
	{
		for (i = 0; i < 64; i++)
		{
			_putchar(1 + '0');
		}
		return;
	}
	if (n == 0 || n == '\0')
		_putchar(0 + '0');

	while (n < max)
		max *= 0.5;

	while (max > 0)
	{
		n -= max;
		_putchar(1 + '0');
		max *= 0.5;

		while (max > n)
		{
			_putchar(0 + '0');
			max *= 0.5;
		}
	}
}
