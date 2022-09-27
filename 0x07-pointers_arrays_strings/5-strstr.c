#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: substring
 * Return: a pointer to the matching string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
