#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit_size = sizeof(n) * 8;
	int bit = 0;

	while (bit_size)
	{
		if (n & 1L << --bit_size)
		{
			_putchar('1');
			bit++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!bit)
		_putchar('0');
}
