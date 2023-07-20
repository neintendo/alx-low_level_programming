#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a newline.
 * @separator: the string to be printed in between numbers.
 * @n: number of parameters.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(pointer, char *);

		if (separator != NULL && i != 0)
			printf("%s", separator);

		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
	}

	printf("\n");
	va_end(pointer);
}
