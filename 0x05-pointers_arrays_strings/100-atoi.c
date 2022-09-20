#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: The pointer to string
 * Return: string int
 */

int _atoi(char *s)
{
	int i;

	while(*s)
	{
		if (*s <= '9')
			i = s++;
	}
	return (i);
}
