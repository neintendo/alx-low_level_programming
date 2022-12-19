#include "main.h"

/**
 * print_times_table - prints a times table
 * @n: the number to base a times table from.
 *
 * Description: prints the 9 times table.
 */
void print_times_table(int n)
{
	int i, j;
	int multi, check;
	int first100, second10, second100, third100;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;
				check = multi + i;

				if (multi < 10) /* first digit for numbers less than 10 */
				{
					_putchar(multi + '0');
				}
				if (multi >= 10 && multi < 100) /* second digit for numbers 10 <= 100 */
				{
					second10 = multi / 10;
					_putchar(second10 + '0');
				}
				if (multi >= 100) /* first digit for numbers over 100 */
				{
					first100 = multi / 100;
					_putchar(first100 + '0');
				}
				if (multi / 10 && multi < 100) /* second digit conversion for 10 <= 100 */
				{
					_putchar(multi % 10 + '0');
				}
				if (multi >= 100) /* second digit for numbers over 100 */
				{
					second100 = multi / 10;
					_putchar(second100 % 10 + '0');
				}
				if (multi >= 100) /* third digit for numbers over 100 */
				{
					third100 = multi % 10;
					_putchar(third100 + '0');
				}
				if (j != n && check < 10) /* checks if number is < 10 */
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (j != n && check >= 10 && check < 100) /* 10 < number < 100 */
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (j != n && check >= 100) /* checks if number is more than 100 */
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}
