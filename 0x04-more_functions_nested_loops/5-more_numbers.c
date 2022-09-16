#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
		}
		c = '1';
		d = '0';
		for (c = '1'; c < '2'; c++)
		{
			for (d = '0'; d <= '4'; d++)
			{
				_putchar(c);
				_putchar(d);
			}
		}
		_putchar('\n');
	}
}
