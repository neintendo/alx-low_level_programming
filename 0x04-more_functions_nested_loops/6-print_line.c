#include "main.h"

/**
 * print_line - prints a set character
 * @n: the char to be printed
 *
 * Description: prints out underscores to draw a line on stdout
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
