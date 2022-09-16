#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			if (b >= 14)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			b++;
		}
	_putchar('\n');
	a++;
	b = 0;
	}
}
