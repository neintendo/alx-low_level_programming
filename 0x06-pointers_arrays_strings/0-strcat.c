#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string array.
 * @src: the source string array.
 *
 * Description: appends the @src string to the @dest string.
 * Return: returns @dest on success.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int b = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[b] && *src != '\0')
	{
		dest[i] = src[b];
		b++;
		i++;
	}
	return (dest);
}
