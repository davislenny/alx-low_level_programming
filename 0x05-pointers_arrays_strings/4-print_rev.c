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
		length++;/*obtain stringth lenth*/
		s++;
	}
	--s;/* moveback to the last string character*/
	for (i = length; i > 0; i--)
	{
		_putchar(*s--);/*print the string in reverse*/
	}
	_putchar('\n');
}
