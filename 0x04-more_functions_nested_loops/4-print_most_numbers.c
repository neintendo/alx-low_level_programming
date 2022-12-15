#include "main.h"

/**
 * print_most_numbers - prints digits;
 *
 * Description: prints all single digits except 2 & 4
 */
void print_most_numbers(void)
{
	int i;


	for (i = 48; i < 58;)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar(10);
}
