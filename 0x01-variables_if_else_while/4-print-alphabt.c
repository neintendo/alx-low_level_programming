#include <stdio.h>

/**
 * main - prints text from array.
 * Description: prints lowercase letters followed by \n.
 * Return: displays all lowercase letters in one line.
 */
int main(void)
{
	char lc[] = {"abcdfghijklmnoprstuvwxyz\n"};
	char *lc_ptr;

	lc_ptr = lc;

	while (*lc_ptr)
	{
		putchar(*lc_ptr);
		lc_ptr++;
	}
	return (0);
}
