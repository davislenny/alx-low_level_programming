#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (length);
}

/**
 * *_strcpy - copies the string
 * @dest: a pointer variable
 * @src: a pointer variable
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
