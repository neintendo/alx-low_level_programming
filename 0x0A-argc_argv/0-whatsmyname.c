#include "main.h"

/**
 * main - main function.
 * @i: used to count length of the filename.
 * @argv: the filename.
 *
 * Description: prints the name of the program.
 * Return: returns (0) on success.
*/
int main(int i, char **argv)
{
	char *name = *argv;
	char *count = *argv;
	int loop = 0;

	i = 0;

	while (*count)
	{
		count++;
		i++;
	}

	while (loop < i)
	{
		_putchar(*name);
		name++;
		loop++;
	}
	_putchar(10);

	return (0);
}
