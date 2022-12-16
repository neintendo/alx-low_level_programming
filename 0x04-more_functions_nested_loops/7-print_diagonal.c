#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line to print
 *
 * Description: prints a diagonal line based on n
 * Return: returns a diagonal line based on n
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);

			if (i == n - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
