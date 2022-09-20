#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: The pointer to string
 * Return: string int
 */

int _atoi(char *s)
{

	while(*s++)
	{
		if (*s <= '9')
			return (*s++);
	}
	return (0);
}
