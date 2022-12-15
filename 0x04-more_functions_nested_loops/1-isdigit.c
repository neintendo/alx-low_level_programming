#include "main.h"

/**
 * _isdigit - function to check a character
 * @c: the character to check
 *
 * Description: checks if a character is a digit
 * Return: returns 1 on success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 71)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
