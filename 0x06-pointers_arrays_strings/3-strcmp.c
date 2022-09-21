#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: 1st string
 * @s2: 2nd strin
 * Return: difference value
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			return (diff);
		}
		s1++;
		s2++;
	}
	return (0);
}
