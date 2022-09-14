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
		return (1);
		_putchar('+');
	else if ( n = 0)
		return (0);
		_putchar('0');
	else 
		return (-1);
		_putchar('-');
	_putchar('\n');
}
