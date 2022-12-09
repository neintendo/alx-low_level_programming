#include <stdio.h>

/**
 * main - integer print loop.
 * Description: Prints numbers from 0-9 using a for loop.
 * Return: Returns all single digit numbers of base 10.
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
