#include "main.h"

/**
 * _islower - Check for lowercase alphabets
 *
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
