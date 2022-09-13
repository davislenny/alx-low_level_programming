#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: print "from a to z"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
