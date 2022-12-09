#include <stdio.h>

/**
 * main - integer print loop.
 * Description: Prints base 16 numbers in lowercase.
 * Return: Returns all numbers of base 16 in lowercase.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
