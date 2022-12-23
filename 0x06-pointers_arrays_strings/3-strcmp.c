#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: returns values or 0 on success.
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int neg, pos;

	if (s1 != s2)
	{
		while (s1[len1] == s2[len2])
		{
			len1++;
			len2++;
		}
		while (s1[len1] > s2[len2])
		{
			pos = s1[len1] - s2[len2];
			return (pos);
		}
		while (s1[len1] < s2[len2])
		{
			neg = s2[len2] - s1[len1];
			neg = neg * -1;
			return (neg);
		}
	}
	return (0);
}
