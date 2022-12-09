#include <stdio.h>

/**
 * main - displays combinations.
 * Description: displays all combinations of base 10 numbers using putchar.
 * Return: returns all possible combinations of base 10 numbers.
 */
int main(void)
{
	int i;
	int comma = ',';
	int space = ' ';

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(comma);
			putchar(space);
		}
	}
		putchar(10);

		return (0);
}
