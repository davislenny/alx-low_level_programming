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
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '1';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{

				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);


					if (a != '8' || b != '7' || c != '8' || d != '8')
					{
					putchar(44);
					putchar(32);
					}
				}
				d++;

			}
			c++;
		}
		b++;
	}
	a++;

	putchar('\n');

	return (0);
}
