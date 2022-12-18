#include "main.h"

/**
 * times_table - prints a times table
 * Description: prints the 9 times table
 *
 */
void times_table(void)
{
	int i, j, t;
	int multi;
	int firstdigit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0, t = 1; j <= 9; j++, t++)
		{
			multi = i * j;

			if (multi < 10)
			{
			_putchar(multi + '0');
			}
			if (multi >= 10)
			{
				firstdigit = multi / 10;
				_putchar(firstdigit + '0');
			}
			if (multi / 10)
			{
				_putchar(multi % 10 + '0');
			}
			if (j != 9 && (t * i) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (j != 9 && (t * i) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
