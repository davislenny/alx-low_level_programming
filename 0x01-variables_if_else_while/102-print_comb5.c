#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combination of
 * two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = (a + 1); b <= '9'; b++)
	{
		for (c = (b + 1); c <= '9'; c++)
		{
		for (d = (c + 1); d <= '9'; d++)
		{
			putchar(a);
			putchar(b);
			putchar(32);
			putchar(c);
			putchar(d);

			if (a != '9' || b != '8' || c != '9' || d != '9')
			{
				putchar(44);
				putchar(32);
			}
		}
		}
	}
	}
	putchar('\n');

	return (0);
}
