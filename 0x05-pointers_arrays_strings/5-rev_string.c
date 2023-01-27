#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
*/
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char temp;

	while (s[i++])
		count++;

	for (i = count - 1; i >= count / 2; i--)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
