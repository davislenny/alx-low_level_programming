#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: the 1st string
 * @src: the second string
 * Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int d, s;
	d = 0;
	s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
