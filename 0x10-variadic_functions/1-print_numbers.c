#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by a newline.
 * @separator: the string to be printed in between numbers.
 * @n: number of parameters.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		printf("%d", va_arg(pointer, int));
	}

	printf("\n");
	va_end(pointer);
}
