#include "main.h"

/**
 * print_sign - returns polarity of a number.
 * @n: the number to check.
 *
 * Description: returns polarity and the return value.
 * Return: returns 1 on success.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
