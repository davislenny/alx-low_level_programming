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
		n *= -1;
	   	_putchar('0' + (n % 10));

		return (n % 10);
	}
}
