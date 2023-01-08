#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle to print.
*/
void print_triangle(int size)
{
	int hash = 0;
	int sizeneg = size - 1;
	int width = 1;
	int height = 0;

	while (height < size)
	{
		while (width < size)
		{
			_putchar(' ');
			width++;
			hash++;
		}
		while (hash < size)
		{
			_putchar('#');
			hash++;
		}
		if (width == size)
		{
			_putchar(10);
			height++;
			sizeneg--;
		}
		hash = 0;
		width = width - sizeneg;
	}
	if (size <= 0)
		_putchar(10);
}
