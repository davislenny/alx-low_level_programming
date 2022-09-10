#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing all possible different combinations
 * of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = (a + 1); b <= '9'; b++)
		{
			for (c = (b + 1); c <= '9'; c++)
			{
				putchar(a);
				putchar(b);

			if (a != '7' || b != '8' || c != '9')
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}


	putchar('\n');

	return (0);
