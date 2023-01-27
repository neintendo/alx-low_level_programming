#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse.
 * @n: number of elements in @a.
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
