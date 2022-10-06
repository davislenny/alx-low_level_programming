#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 used
 * Return: pointer to the allocated memory of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j k;
	char *pr;

	if (!s1)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (!s2)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	pr = malloc(sizeof(char) * (i + j + 1));
	if (!pr)
		return (NULL);
	for (k = 0; k < j; k++)
		pr[k] = s1[k];
	for (k = 0; k < j; k++)
		pr[k + i] = s2[k];
	pr[i + j] = '\0';
	return (pr);
}
