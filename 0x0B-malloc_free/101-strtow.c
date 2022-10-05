#include "main.h"
#include <stdlib.h>
/**
 * wrdCnt - counts words in str
 * @str: the string
 * Return: number of words
 */
int wrdCnt(char *str);
{
	int i, j = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}
/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer to the string array
 */
char **strtow(char *str)
{
	int i, j, k, l, m, n;
	char **s;

	m = n = 0;
	if (!*str || !str)
		return (NULL);
	m = wrdCnt(str);
	if (m == 0)
		return (NULL);
	s = (char **)malloc(m * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[m - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			s[n] = (char *)malloc(j * sizeof(char));
			j--;
			if (s[n] == NULL)
			{
				for (k = 0; k < n; k++)
					free(s[k]);
				free(s[m - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				s[n][l] = '\0';
			s++;
			i += j;
		}
		else
			i++;
	}
	return (s);
}
