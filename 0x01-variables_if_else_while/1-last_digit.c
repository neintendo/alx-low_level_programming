#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function prints the last digit and compares.
 * Description: generates a random number and takes last digit to compare.
 * Return: Returns if the number satisfies a certain condition.
 */
int main(void)
{
	int n;
	int num_end;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num_end = n % 10;

	if (num_end > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num_end);
	}
	else if (num_end == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num_end);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num_end);

	}
	return (0);
}
