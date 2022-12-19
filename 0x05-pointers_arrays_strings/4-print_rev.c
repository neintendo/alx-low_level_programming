#include "main.h"

/**
 * print_rev - prints a character.
 * @s: the character string to be printed.
 *
 * Description: prints a string of characters to stdout in reverse.
 */
void print_rev(char *s)
{
	int rev;
	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	if (*s == '\0')
	{
		rev = 1;
	}

	s--; /* decrements to prevent printing null character */

	while (rev == 1 && length != 0)
	{
		_putchar(*s);
		--s;
		length--;
	}
	_putchar(10);
}
