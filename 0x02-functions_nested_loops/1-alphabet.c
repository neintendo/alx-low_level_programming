#include "main.h"

/**
 * print_alphabet - prints specified characters.
 * Description: prints all letters of the alphabet in lowecase
 * Return: returns characters
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
