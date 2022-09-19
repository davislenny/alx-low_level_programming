#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
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
