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
	int d;
	d = n % 10;

	if (n < 0)
	{
		d = d * -1;
		_putchar('0' + d);
		return (d);
	}
	if (n = 0)
	{
		d = d * 0;
		_putchar('0' + d);
		return (d);
	}
	else
	{
		d = d * 1;
		_putchar('0' + d);
		return (d);
	}
	_putchar('\n');
}
