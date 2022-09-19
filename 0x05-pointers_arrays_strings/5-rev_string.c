#include "main.h"
/**
 * _strlen - obtain string length
 * @s: a ponter to the string
 * Return: string length
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
 * rev_string - reverses a string
 * @s: a pointer to the string
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	b = _strlen(s) - 1;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
