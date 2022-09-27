#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the fist located character
 * Return: a pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*(s + i) && *(s + i) != c)
		i++;
	if (*(s + i) == c)
		return (s + i);
	else
		return (NULL);
}
