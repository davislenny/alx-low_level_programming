#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 * Return: number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			a = 0;
			if (s[i] == accept[j] && (*(s + i + 1) != ' ' || *(s + i + 1) != ','))
			{
				a++;
				return (a);
			}

		}
	}
	return (0);
}
