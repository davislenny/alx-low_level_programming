#include "main.h"

/**
 * print_alphabet_x10 - print ten lines of alphabet
 *
 * Retur: 0 (success)
 */
void print_alphabet_x10(void)
{
	int nt = 1;
	char c;

	while (nt <= 10)
	{
		c = 'a';
		while(c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		nt++;
	}
}
