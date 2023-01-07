#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: the count of arguments.
 * @argv: the arguments.
 *
 * Return: returns (0) on success.
*/
int main(int argc, char **argv)
{
	int count = -1;

	while (argc-- && **argv)
	{
		count++;
	}
	_putchar(count + '0');
	_putchar(10);

	return (0);
}
