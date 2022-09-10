#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing if number entered is positive, zero or negative
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int n;
	n = 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

	return (0);
}
