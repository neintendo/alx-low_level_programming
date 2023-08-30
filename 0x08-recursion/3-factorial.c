#include "main.h"

/**
 * factorial - calculates the factorial of @n.
 * @n: number to find the factorial of.
 *
 * Return: returns the factorial of @n on success / -1 on error.
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);

	return (n * factorial(n - 1));
}
