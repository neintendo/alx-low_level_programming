#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string array.
 * @src: the source string array.
 * @n: number of bytes.
 *
 * Description: appends the @src string to the @dest string.
 * Return: returns @dest on success.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int b = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[b] && b < n)
	{
		dest[i] = src[b];
		b++;
		i++;
	}
	return (dest);
}
