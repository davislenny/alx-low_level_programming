#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:a pointer to the newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	i = j = 0;

	while (s1 && *s1++)
		i++;
	while (s2 && *s2++)
		j++;

	s = malloc((i + j + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	s = s + i + j;
	*s = '\0';

	for (s2--; j--;)
		*--s = *--s2;
	for (s1--; i--;)
		*--s = *--s1;
	return (s);
}
