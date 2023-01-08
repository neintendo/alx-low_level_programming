#include <stdio.h>

/**
 * main - fibonacci function
 * Description: prints even fibonacci numbers to <4M.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int index = 0;
	int storage[10000];
	long int sum = 0;
	long int one = 0;
	long int two = 1;
	long int next = one + two;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
		{
			storage[index] = next;
			index++;
		}

		one = two;
		two = next;
		next = one + two;
	}

	for (i = 0; i < index; i++)
	{
		sum = sum + storage[i];
	}

	printf("%ld", sum);
	printf("\n");

	return (0);
}
