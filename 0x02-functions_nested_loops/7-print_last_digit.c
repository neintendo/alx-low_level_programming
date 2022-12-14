#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the integer to operate on
 *
 * Description: prints last digit of an integer when called
 * Return: returns @num on success
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
