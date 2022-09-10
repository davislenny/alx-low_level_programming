#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print integers using putchar
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	while (i >= 0 && i <= 9)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
