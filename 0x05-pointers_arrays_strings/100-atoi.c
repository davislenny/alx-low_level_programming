#include "main.h"
/**
 * _atoi - converts a string to an int
 * @s: Pointer to the string
 * Return: The string int
 */
int _atoi(char *s)
{
	int num;
	num = 0;

	while (*s)
	{
		if (*s <= '9')
		{
			num++;
			s++;
		}
	}
	return (num);
}
