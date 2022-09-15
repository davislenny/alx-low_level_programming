#include "main.h"

/**
 * _isupper - Checks for an uppercase character
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c);
{
	int result, a;

	for (a >= 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			result = 1;
			break;

		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
