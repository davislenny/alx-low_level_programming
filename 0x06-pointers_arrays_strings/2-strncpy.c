#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: position byte index
 * Return: the new strin
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
