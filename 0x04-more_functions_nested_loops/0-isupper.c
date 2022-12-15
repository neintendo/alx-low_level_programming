#include "main.h"

/**
 * _isupper - function to check a character
 * @c: the character to check
 *
 * Description: checks if a character is uppercase
 * Return: returns 1 on success
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
