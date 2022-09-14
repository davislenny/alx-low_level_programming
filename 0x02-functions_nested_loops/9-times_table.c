#include "main.h"

/**
 * times_table - Print  the 9 times table
 *
 */

void times_table(void)
{
	int r, c, p, a, b;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = r * c;
			a = p / 10;
			b = p % 10;
			if (c == 0)
			{
				_putchar(0);
			}
			else if (r == 0)
			{
				_putchar(0);
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(a + '0');
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
