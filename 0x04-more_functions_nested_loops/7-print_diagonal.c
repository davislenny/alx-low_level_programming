#include"main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: starting point
 * Return: Always 1
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('\');
	}
	_putchar('\n');
}
