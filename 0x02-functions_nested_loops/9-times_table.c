#include "main.h"

/**
 * times_table - Print  the 9 times table
 *
 */

void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		_putchar(0);
		for (c = 0; c <= 9; c++)
		{
			p = r * c;
			_putchar(',');
			_putchar(' ');

			if (p < 10)
			{
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
