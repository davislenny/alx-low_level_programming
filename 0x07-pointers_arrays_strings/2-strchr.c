#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the fist located character
 * Return: a pointer to the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
