#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: type(void)
 */
void jack_bauer(void)
{
	int h0, h1, m0, m1, hmax;

	hmax = 58;
	h0 = '0';
	while (h0 < '3')
	{
		if (h0 == '2')
		{
			hmax = '4';
		}
		h1 = '0';
		while (h1 < hmax)
		{
			m0 = '0';
			while (m0 < '6')
			{
				m1 = '0';
				while (m1 < 58)
				{
				_putchar(h0);
				_putchar(h1);
				_putchar(58);
				_putchar(m0);
				_putchar(m1);
				m1++;
				}
				m1 = '0';
				m0++;
			}
			m0 = '0';
			h1++;
		}
		h1 = '0';
		h0++;
	}
}
