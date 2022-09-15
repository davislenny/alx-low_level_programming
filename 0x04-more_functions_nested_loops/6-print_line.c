#include "main.h"

/**
 * print_line - printing straight line
 * @n: starting point
 * Return: Always 1
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
