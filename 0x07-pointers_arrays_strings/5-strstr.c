#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: substring
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] > '\0'; i++)
	{
/*		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)*/
		{
			if (haystack[j] != needle[j - i])
				break;
		}
		if (needle[j - i] == '\0')
			return (haystack + i);
	}
	return (0);
}
