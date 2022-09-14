#include "main.h"

/**
 * _isalpha - Check if a character is an alphabet
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 *
 * @c: The character entered and checked
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
