#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: pointer to the string
 * Return: string length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	for (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}


/**
 * puts_half - prints half of the string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int a;

	if (_strlen(str) % 2 = 0)
	{
		a = _strlen(str) / 2;
		for (a < _strlen(str); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (_strlen(str) % 2 != 0)
	{
		a = (_strlen(str) / 2) + 1;
		for (a < _strlen(str); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
