#include <stdio.h>

/**
 * main - calculates multiples.
 * Description: calculates multiples of 5 & 3 below 1024 then adds them.
 *
 * Return: returns 244293 on success
 */
int main(void)
{
	int a, b;

	b = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			b = b + a;
		}
	}
	printf("%d\n", b);

	return (0);
}
