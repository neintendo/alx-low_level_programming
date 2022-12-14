#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 * Description: returns ASCII 97 to 122, 10 times.
 * Return: 0 on success.
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int loop = 1;

	do {
		for (a = 97; a < 123; a++)
		_putchar(a);
		loop++;
		_putchar(10);
	} while (loop <= 10);
}
