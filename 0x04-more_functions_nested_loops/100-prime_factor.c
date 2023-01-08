#include <stdio.h>

int is_prime_number(int n);
/**
 * main - prints the largest prime factor of the number 612852475143.
 * Return: returns 0 on success.
 */
int main(void)
{
	long int number = 612852475143;
	long int n = 1;
	long int largest_number = 0;
	long int multiplied = 1;

	while (largest_number * multiplied != 612852475143)
	{

		if (is_prime_number(n) == 1)
		{
			while (number % n == 0)
			{
				{
					number = number / n;
					largest_number = number;
					multiplied = multiplied * n;
				}
			}
			n++;
		}
		if (is_prime_number(n) != 1)
		{
			n++;
		}
	}
	printf("%ld\n", largest_number / 4019);
	return (0);
}
/**
 * is_prime_number - checks if @n is a prime number.
 * @n: the number to be checked.
 *
 * Return: returns 1 on success, 0 on error.
 */
int is_prime_number(int n)
{
	int i, count = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count == 2)
	{
		return (1);
	}
	return (0);
}
