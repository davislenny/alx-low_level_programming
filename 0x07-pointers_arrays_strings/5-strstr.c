#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
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
