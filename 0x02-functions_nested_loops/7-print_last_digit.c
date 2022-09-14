#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 *
 * @n: n is the number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = n * -1;

		_putchar((n % 10) + '0');

	}
	_putchar('\n');

	return (n % 10);
}
