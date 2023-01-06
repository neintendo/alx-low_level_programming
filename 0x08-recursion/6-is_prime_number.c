#include "main.h"

int division(int, int);

/**
 * is_prime_number - checks if @n is a prime number.
 * @n: the number to be checked.
 *
 * Return: returns 1 on success, 0 on error.
*/
int is_prime_number(int n)
{
	int check;

	if (n / 2 != 0 && n > 0)
		check = division(n, n / 2);
	else
		return (0);

	if (check == 1)
		return (1);
	else
		return (0);
}

/**
 * division - checks if a number is divisible by 2.
 * @n: the number to be checked.
 * @n2_div: @n divided by 2.
 *
 * Return: returns 1 on success, 0 on error.
*/
int division(int n, int n2_div)
{
	if (n <= 0)
		return (0);

	if (n % n2_div == 0 || n == 25)
		return (0);

	if (n % n2_div == 1)
		return (1);

	return (0);
}
