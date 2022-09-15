#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 * @n: starting point
 * Return: type (void)
 */
void print_numbers(void)
{
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
