#include "main.h"
/**
 * *_strncat - Concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: src index bytes
 * Return: The new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, s;
	d = 0;
	s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != src[n])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';

	return (dest);
}
