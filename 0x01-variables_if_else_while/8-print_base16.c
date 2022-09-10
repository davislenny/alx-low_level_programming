#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int AF = 'a';

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	while (AF <= 'f')
	{
		putchar(AF);
		AF++;
	}
	putchar('\n');

	return (0);
}
