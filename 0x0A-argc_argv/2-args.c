#include "main.h"

/**
 * main - prints all the arguments it receives.
 * @argc: the numbers of arguments.
 * @argv: the arguments.
 *
 * Return: returns 0 on success.
*/
int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;

	while (argc--)
	{
		while (argv[a][b] != '\0')
		{
			_putchar(argv[a][b]);
			b++;
		}

		if (argv[a][b] == '\0')
			b++;

		_putchar(10);
	}
	return (0);
}
