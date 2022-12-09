#include <stdio.h>

/**
 * main - prints text from array.
 * Description: prints all letters in lower/uppercase followed by \n.
 * Return: displays all letters letters in one line.
 */
int main(void)
{
	char lu[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n"};
	char *lu_ptr;

	lu_ptr = lu;

	while (*lu_ptr)
	{
		putchar(*lu_ptr);
		lu_ptr++;
	}
	return (0);
}
