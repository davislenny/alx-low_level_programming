#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digit num
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while (i >= 0 && i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
