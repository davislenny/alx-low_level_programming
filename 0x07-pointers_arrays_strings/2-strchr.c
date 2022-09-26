#include "main.h"
/**
 * strchr - locates a character in a string
 * @s: the string
 * @c: the fist located character
 * Return: a pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
