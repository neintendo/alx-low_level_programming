#include <stdio.h>

/**
 * main - fibonacci function
 * Description: prints even fibonacci numbers to <4M.
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int i;
	int n = 32;
	int mod;
	int array[12];
	int sum = 0;
	long int one = 0;
	long int two = 1;
	long int next = one + two;
	int *ptr;

	ptr = array;

	for (a = 1; a <= n; a++)
	{
		mod = next % 2;
		if (mod == 0)
		{
			*ptr = next;
			ptr++;
			if (array[12] < 13)
			{
			sum = sum + array[i];
			i++;
			}
		}
		one = two;
		two = next;
		next = one + two;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}

