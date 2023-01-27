#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @a: the string to encode.
 *
 * Return: returns encoded string.
 */
char *leet(char *a)
{
	int index = 0;
	int comp_index = 0;
	char comp[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	while (a[index])
	{
		while (a[index] != comp[comp_index] && comp_index < 10)
			comp_index++;

		if (a[index] == comp[comp_index] && comp_index != 10)
		{
			a[index] = num[comp_index];
			comp_index = 0;
			leet(a - 1);
		}
		comp_index = 0;
		index++;
	}
	return (a);
}
