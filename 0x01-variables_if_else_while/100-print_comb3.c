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
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
		}
		if (a <= '7' || b <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;

	putchar('\n');

	return(0);
}
