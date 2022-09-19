#include "main.h"
/**
 * _strlen - a function that returns string length
 * @s: The string pointer
 * Return: String length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * puts2 - prints every other character of a string
 * @str: The string pointer
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
