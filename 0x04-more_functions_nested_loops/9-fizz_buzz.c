#include <stdio.h>

/**
 * main - main function
 * Description: prints out numbers from 1 - 100
 *              but for multiples of 5 prints Buzz
 *              and for multiples of 3 prints Fizz
 *
 * Return: returns 0 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101;)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
			i++;
		}
		else if ((i % 5) == 0 && i == 100)
		{
			printf("Buzz");
			i++;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
			i++;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");
	return (0);
}
