#include "main.h"
/**
 * _strlen - obtain string length first
 * @s: a ponter to the string
 * Return: string length
 */
int _strlen(char *s)
{
	int length;/*a variable for counting characters in the string*/

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * rev_string - reverses a string
 * @s: a pointer to the string
 */
void rev_string(char *s)
{
	int a, b;/*variables a & b are position holders*/
	char c;

	a = 0;/* 1st character position */
	b = _strlen(s) - 1;/* last character position */

	while (a < b)
	{/* interchange positional values to obtain last character position for each printout */
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;/* print the string */
		b--;/* print string in reverse */
	}
}
