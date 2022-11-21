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

	d = s = 0;

	while (*(dest + d))
	{
		d++;
	}
	while ((*(dest + d) = *(src + s)))
	{
		d++;
		s++;
	}
	return (dest);
}
