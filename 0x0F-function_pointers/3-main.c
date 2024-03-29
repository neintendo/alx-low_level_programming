#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - performs simple operations.
 * @argc: the number of arguments.
 * @argv: the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strlen(argv[2])) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
