#include "main.h"
/**
 * *_strstr -  locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located string or NULL
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
