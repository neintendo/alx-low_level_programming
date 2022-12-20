#include "main.h"

/**
 * puts2 - prints a character.
 * @str: the character array to be printed.
 *
 * Description: prints every other character of a string to stdout.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
