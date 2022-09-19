#include "main.h"
/**
 * *_strcpy - copies the string 
 * @dest: a pointer variable
 * @src: a pointer variable
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
