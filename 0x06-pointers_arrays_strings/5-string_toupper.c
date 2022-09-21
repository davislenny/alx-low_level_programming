#include "main.h"
/**
 * string_toupper -  cahnge all lowercase letters to uppercase
 * @str: the string
 * Return: Uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'A')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
