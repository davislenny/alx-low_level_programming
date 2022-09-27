#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory address to receive a copy
 * @src: memory address to copy from
 * @n: bytes of memory to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
