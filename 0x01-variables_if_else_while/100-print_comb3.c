#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptio: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '01';

	while (num <= '89')
	{
		putchar(num);
		if (num !='89')
		{
			putchar(44);
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
