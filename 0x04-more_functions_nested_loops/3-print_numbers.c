#include "main.h"

/**
 * print_numbers - prints digits;
 *
 * Description: prints all single digits followed by \n
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
