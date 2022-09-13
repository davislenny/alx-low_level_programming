#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char b;
	int times;

	for (times = 0; times <=9; times++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			putchar(b);

		}
		putchar('\n');
	}
	return (0);
}

