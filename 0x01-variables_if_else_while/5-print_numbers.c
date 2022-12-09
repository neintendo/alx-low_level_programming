#include <stdio.h>

/**
 * main - integer print loop.
 * Description: Prints numbers from 0-9 using a for loop.
 * Return: Returns all single digit numbers of base 10.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
