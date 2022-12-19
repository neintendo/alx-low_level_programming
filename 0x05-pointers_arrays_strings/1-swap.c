#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int swp1, swp2;

	swp1 = *a;
	swp2 = *b;

	*a = swp2;
	*b = swp1;
}
