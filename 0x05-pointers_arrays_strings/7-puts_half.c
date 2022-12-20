#include "main.h"

/**
 * puts_half - prints a half of a string.
 * @str: the character array to be printed.
 *
 * Description: prints half of a string followed by a newline.
 */
void puts_half(char *str)
{
	int length = 1;

	while (*str)
	{
		str++;
		length++;
	}
	if (length % 2 != 0)
	{
		length = length / 2;
		str = str - length;

		while (*str)
		{
			_putchar(*str);
			str++;
			length++;
		}
		_putchar(10);
	}
	else
	{
		length = length - 1;
		length = length / 2;
		str = str - length;

		while (*str)
		{
			_putchar(*str);
			str++;
			length++;
		}
		_putchar(10);
	}
}
