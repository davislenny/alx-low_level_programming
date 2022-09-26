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
	return (NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containg characters to be matched
 * Return: number of matched bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s && _strchr(accept,*s))
	{
		s++;
		i++;
	}
	return (i);
}
