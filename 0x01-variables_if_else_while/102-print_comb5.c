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
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
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
				d = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
