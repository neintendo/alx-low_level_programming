#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @a: the string to encode.
 *
 * Return: returns encoded string on success.
*/
char *rot13(char *a)
{
	int i = 0;
	int ss = 0;
	char rot13_arr[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char swap[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (a[i])
	{
		while (a[i] != rot13_arr[ss] && ss < 52)
			ss++;

		if (a[i] == rot13_arr[ss] && ss != 10)
		{
			a[i] = swap[ss];
			ss = 0;
			rot13(a - 1);
		}
		ss = 0;
		i++;
	}
	return (a);
}
