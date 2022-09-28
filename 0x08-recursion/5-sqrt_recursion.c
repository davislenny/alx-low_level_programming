#include "main.h"
/**
 * cheq_root - finds a natural root of a number
 * @n: the number
 * @i: values to scan for root
 * Return: natural root or -1
 */
int cheq_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (cheq_root(n, i + 1));
}

/**
 * _sqrt_recursion - find square root of a number
 * @n: the number
 * Return: the square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (cheq_root(n, 0));
}
