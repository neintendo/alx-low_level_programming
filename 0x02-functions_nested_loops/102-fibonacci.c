#include <stdio.h>

/**
 * main - fibonacci function
 * Description: prints the first fibonacci numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int n = 50;
	long int one = 0;
	long int two = 1;
	long int next = one + two;

	for (a = 1; a <= n; a++)
	{
		printf("%ld", next);
		if (a < n)
		{
			printf(", ");
		}
		one = two;
		two = next;
		next = one + two;
	}
	printf("\n");

	return (0);
}
