#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments.
 * @av: the arguments.
 *
 * Return: returns concatenated arguments or NULL on error.
*/
char *argstostr(int ac, char **av)
{
	int c = 0, d = 0, a = 0, b = 0;
	int count = ac;
	char **arr_count = av;
	char *output;
	int put = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (count--)
	{
		while (arr_count[a][b] != '\0')
			b++;
		if (arr_count[a][b] == '\0')
			b++;
	}
	output = malloc((sizeof(*output) * b) + 1);

	if (output == NULL)
		return (NULL);

	while (put < b)
	{
		while (av[c][d] != '\0')
		{
			output[put] =  av[c][d];
			put++;
			d++;
		}
		if (av[c][d] == '\0')
		{
			output[put] = '\n';
			put++;
			d++;
		}
	}
	return (output);
}
