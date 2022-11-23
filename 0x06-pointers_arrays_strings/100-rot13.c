#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: the string
 * Return: the new string
 */
char *rot13(char *s)
{
	int i, j;
	char a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (a[j] != '\0' && s[i] != a[j])
		{
			j++;
		}
		if (s[i] == a[j])
		{
			s[i] = b[j];
		}

	}
	return (s);
}
