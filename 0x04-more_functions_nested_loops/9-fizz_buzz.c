#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The “Fizz-Buzz test”
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			putchar(i);
		if (i != 100)
		putchar(' ');
	}
	putchar('\n')
	return (0);
}
