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
	int lstd;
	lstd = n % 10;

	if (lstd < 0)
	{
		lstd *= -1;

		_putchar(lstd + '0');

	}
	return (lstd);
	_putchar('\n');

}
