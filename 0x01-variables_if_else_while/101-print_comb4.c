#include <stdio.h>

/**
 * main - prints smallest combination of three digits.
 * Description: and the digits must be different.
 * Return: returns 0.
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a != b && a != c && b != c)
				{
					putchar ((a % 10) + '0');
					putchar ((b % 10) + '0');
					putchar ((c % 10) + '0');
					if (a + b + c < 24)
					{
						putchar (44);
						putchar (32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
