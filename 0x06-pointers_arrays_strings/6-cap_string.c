#include "main.h"
/**
 * cap_string - capitalizes all words
 * @s: the string
 * Return: new string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
			&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == '\n' || s[i - 1] == ' '))
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
