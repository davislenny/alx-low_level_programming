#include "main.h"

/**
 * print_sign - Print sing value of a number
 *
 * Return: 1 if +ve 0 if zero and -1 if negative
 * @n: The number entered for checking
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
