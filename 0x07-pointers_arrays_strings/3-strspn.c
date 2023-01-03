#include "main.h"

/**
 * _strspn - gets length of a prefix substring.
 * @s: the initial segment.
 * @accept: the bytes to scan in the initial segment.
 *
 * Return: returns the number of bytes in the initial segment of @s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int end_acc = 0;
	char *word;
	unsigned int count = 0;

	word = accept;

	while (*word)
	{
		end_acc++;
		word++;
	}
	while (b != end_acc)
	{
		if (s[a] == ',' || s[a] == ' ')
		{
			a = 0;
			b++;
		}
		if (s[a] == accept[b])
		{
			count++;
			a++;
		}
		else
		{
			a++;
		}
	}
	return (count);
}
