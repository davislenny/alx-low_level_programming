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
	int l;
	l = n % 10;

	if (n < 0)
	{
		l = l * -1;
		_putchar(l + '0');
	}
	_putchar('\n');
	return (l);
}
