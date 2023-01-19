#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns a sum of all it's parameters.
 * @n: number of parameters.
 *
 * Return: returns sum of all parameters on success.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list pointer;

	if (n == 0)
		return (0);

	va_start(pointer, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pointer, int);

	va_end(pointer);

	return (sum);
}
