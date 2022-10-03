#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string param
 * @str: the string
 * Return: pointer to the duplicated string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (*str++)
		i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i++; i--;)
		s[i] = --*str;
	return (s);
}
