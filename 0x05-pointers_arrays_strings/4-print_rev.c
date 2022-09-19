#include "main.h"
/**
 * print_rev - print a sting in reverse
 * @s: Pointer variable to string
 */
void print_rev(char *s)
{
	*s = '\0';

	while (*s < '\0')
		_putchar(*s--);
	_putchar('\n');
}
