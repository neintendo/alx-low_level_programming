#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * Description: prints natural numbers from n to 98
 * @n: the parameter to start printing from
 *
 * Return: returns n to 98 on success
 */
void print_to_98(int n)
{
	if (n < 97)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			if (n == 98)
			{
				printf("\n");
			}
		}
	}
	else if (n > 97)
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			if (n == 98)
			{
				printf("\n");
			}
		}
	}
}

