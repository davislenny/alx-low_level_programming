#include "main.h"
/**
 * factorial - finds a factorial of a number
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
