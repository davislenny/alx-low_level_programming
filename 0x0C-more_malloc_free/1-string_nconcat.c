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
	int length, i, j, k;
	char *pr;

	k = n;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (k < 0)
		return (NULL);
	if (k >= _strlen(s2))
		k = _strlen(s2);

	length = _strlen(s1) + k + 1;
	pr = malloc(length * sizeof(char));
	if (!pr)
		return (NULL);
	for (i = 0; s1[i] != '\0; i++)
		pr[i] = s1[i];
	for (j = o; j < k; j++)
		pr[i + j] = s2[j];
	pr[i + j] = '\0';

	return (pr);
}
