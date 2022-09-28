#include "main.h"
/**
 * _strlen - find string length
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * cheq_palindrome - check for string palindrome
 * @s: the string
 * @i: left to right iteration
 * @j: right to left iteration
 * Return: 1 true 0 false
 */
int cheq_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (cheq_palindrome(s, i + 1, j - 1));
}
/**
 * is_palindrome - check for palindrome in a string
 * @s: the string
 * Return: 1 true 0 false
 */
int is_palindrome(char *s)
{
	int j;

	j = _strlen(s) - 1;
	return (cheq_palindrome(s, 0, j));
}
