#include "main.h"
/**
 * *_strstr -  locates a substring
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if(*haystack == *needle)
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
