#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void);

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

