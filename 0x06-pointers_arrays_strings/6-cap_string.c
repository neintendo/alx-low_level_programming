#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @a: the string to be processed.
 *
 * Return: @a on success.
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if ((a[i] >= 'a' && a[i] <= 'z') && ((a[i - 1] == '\n')
						  || (a[i - 1] == '\0')
						  || (a[i - 1] == ',')
						  || (a[i - 1] == ';')
						  || (a[i - 1] == '.')
						  || (a[i - 1] == '!')
						  || (a[i - 1] == '?')
						  || (a[i - 1] == '"')
						  || (a[i - 1] == '(')
						  || (a[i - 1] == ')')
						  || (a[i - 1] == '{')
						  || (a[i - 1] == '}')
						  || (a[i - 1] == ' ')
						  || (a[i - 1] == '\t')))
			a[i] = a[i] - 32;
		i++;
	}

	return (a);
}
