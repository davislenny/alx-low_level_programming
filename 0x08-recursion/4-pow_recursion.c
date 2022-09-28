#include "main.h"
/**
 * _pow_recursion - finds power of a number
 * @x: the number
 * @y: the power
 * Return: value of x to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
