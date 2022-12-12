#include <stdio.h>

/**
 * main - prints smallest combination of two digits.
 * Description: and the digits must be different.
 * Return: returns 0.
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar ((a % 10) + '0');
				putchar ((b % 10) + '0');
			if (a + b < 17)
			{
				putchar (44);
				putchar (32);
			}
			}
		}
	}
	putchar(10);
	return (0);
}
