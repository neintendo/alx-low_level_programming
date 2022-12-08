#include <stdio.h>

/**
 * main - prints sizeof values.
 * Description: prints the size of various types.
 * Return: Prints out values of the various types.
 */
int main(void)
{
	char character;
	int integer;
	long int int_long;
	long long int longest_int;
	float float_num;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(int_long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longest_int));
	printf("Size of a float: %d byte(s)\n", sizeof(float_num));

	return (0);
}
