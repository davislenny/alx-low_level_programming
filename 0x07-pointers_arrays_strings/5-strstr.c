#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: substring
 * Return: a pointer to the matching string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (haystack[i] == needle[j])
			return (haystack + i);
	}
	return (0);
}
