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
		for (i = 0; needle[i]; i++)
			if (needle[i] != haystack[i])
				break;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
