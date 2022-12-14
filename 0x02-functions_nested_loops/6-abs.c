#include "main.h"

/**
 * _abs - computes absolute values
 * @n: the value to be computed
 *
 * Description: computes an absolute value of a given integer.
 * Return: returns computed integer
 */
int _abs(int n)
{
	int neg = -1;

	if (n < 1)
	{
		n = n * neg;
		return (n);
	}
	else if (n > 1)
	{
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
