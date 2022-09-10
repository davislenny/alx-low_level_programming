#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar("%s", c);
		c++;
	}
	putchar('\n');

	return (0);
}	
