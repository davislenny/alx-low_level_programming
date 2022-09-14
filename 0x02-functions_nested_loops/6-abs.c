#include "main.h"

/**
 * _abs - the absolute value of an int
 *
 * @i: The integer entered
 *
 * Return: i (integer)
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (-i);
	}
	_putchar('\n');
}
