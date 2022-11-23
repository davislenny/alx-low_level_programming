#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an input number
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	int i, j, current = 0;

	if (n < 0)
		_putchar('-');
	for (j = 0, i = 1000000000; i > 0; i /= 10)
	{
		current = (n / i) % 10;
		current = current < 0 ? -current : current;
		if (current || j || i == 1)
		{
			_putchar(current + '0');
			j++;
		}
	}
}
