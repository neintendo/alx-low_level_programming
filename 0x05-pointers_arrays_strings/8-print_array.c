#include <stdio.h>

/**
 * print_array - prints an array of int.
 * @a: the integer array to be printed.
 * @n: the number of elements to print.
 *
 * Description: prints n elements of the array followed by a newline.
 */
void print_array(int *a, int n)
{
	int length = 0;

	while (n > length)
	{
		if (n != (length + 1))
		{
			printf("%d, ", *a);
		}
		else
		{
			printf("%d", *a);
		}

		a++;
		length++;
	}
	printf("\n");
}
