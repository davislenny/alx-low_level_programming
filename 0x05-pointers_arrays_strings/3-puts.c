#include "main.h"
/**
 * _puts - a function that prints a string to stdout
 * @str: the string variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
