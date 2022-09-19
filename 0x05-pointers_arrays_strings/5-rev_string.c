#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a pointer to the string
 */
void rev_string(char *s)
{
	int length;
	int i;

	while (*s)
	{
		_putchar(*s++);/*print the string*/
	}

	length = 0;
	while (*s != '\0')
	{
		length++;/*obtain string length*/
		s++;
	}
	--s;
	for (i = length; i > 0; i--)
	{
		_putchar(*s--);/*print string in reverse*/
	}
	_putchar('\n');
}
