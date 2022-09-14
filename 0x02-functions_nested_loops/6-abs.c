#include "main.h"

/**
 * _abs - the absolute value of an int
 *
 * @n: The integer entered
 *
 * Return: n (integer)
 */

int _abs(int)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
	_putchar('\n');
}
