#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: type(void)
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <='5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					if (a != '2' && b != '3' && c != '5' && d != '9')
					{
						_putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
}
