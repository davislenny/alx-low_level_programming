#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 used
 * Return: pointer to the allocated memory of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pr, *pr1;
	unsigned int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);

	j = j > n ? n : j;
	pr = pr1 = malloc(i + j + 1);
	if (!pr1)
		return (NULL);
	while (*s1)
		*pr1++ = *s1++;
	while (j--)
		*pr1++ = *s2++;
	*pr1 = '\0';
	return (pr);
}
