#include <unistd.h>
#include<stdio.h>
#include<stdio.h>
/**
 * positive_or_negative - checks for the value
 *
 * @i: the number to be checked
 * Return: 0 success
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i)
	}
}
