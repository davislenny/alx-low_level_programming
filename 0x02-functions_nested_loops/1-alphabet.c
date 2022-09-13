#include"main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 * Descuription: Print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
