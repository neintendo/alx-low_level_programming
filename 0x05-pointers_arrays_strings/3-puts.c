#include "main.h"

/**
 * _puts - prints a character.
 * @str: the character array to be printed.
 *
 * Description: prints a string of characters to stdout.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
