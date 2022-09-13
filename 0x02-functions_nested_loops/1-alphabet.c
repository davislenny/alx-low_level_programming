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
		_putchar(c);

	_putchar('\n');

	return (0);
}
