#include"main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: starting point
 * Return: Always 1
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(32);
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
