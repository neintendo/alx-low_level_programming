#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed.
 */
void print_all(const char *const format, ...)
{
	int i = 0, reset;
	char *string;
	va_list list;

	va_start(list, format);

	while (format == NULL)
		exit(0);
	while (format[i])
	{
		reset = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			string = va_arg(list, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		default:
			reset++;
			break;
		}
		i++;
		if (reset != 1 && format[i] != '\0')
			printf(", ");
	}
	printf("\n");
}
