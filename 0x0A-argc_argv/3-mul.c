#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: the arguments.
 *
 * Return: the result on success or -1 on failure.
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
