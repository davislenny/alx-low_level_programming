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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0);
	{
		printf("int n is positive");
	}
       	else if (n == 0);
	{
		printf("int n is zero");
	}
       	else
	{
		printf("int n is negative")

	return (0);
}
