#include "main.h"
/**
 * print_rev - print a sting in reverse
 * @s: Pointer variable to string
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	--s;
	for (i = length; i > 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
