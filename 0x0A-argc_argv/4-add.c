#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: the arguments.
 *
 * Return: the result on success or -1 on failure.
 */
int main(int argc, char **argv)
{
	int *array;
	int a, b, av, len, isdgt, sum = 0;
	int count = -1;

	while (argc-- && **argv)
		count++;

	for (a = 1, len = 0; a <= count; a++)
	{
		len = strlen(argv[a]);

		for (b = 0; b < len; b++)
		{
			isdgt = isdigit(argv[a][b]);

			if (isdgt == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	array = malloc(sizeof(int) * count);
	if (array == NULL)
		exit(1);

	for (a = 0, av = 1; av <= count; a++, av++)
		array[a] = atoi(argv[av]);

	for (a = 0; a < count + 1; a++)
		sum += array[a];

	printf("%d\n", sum);

	return (0);
}
