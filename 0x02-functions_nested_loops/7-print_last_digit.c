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
	int lstd = n % 10;

	if (n < 0)
	{
		lstd = lstd * -1;
	
		_putchar(lstd + '0');
	}
	_putchar('\n');

	return (lstd);
}
