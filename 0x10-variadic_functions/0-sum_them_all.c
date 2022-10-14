#include "variadic_functions.h"
/**
 * sum_them_all - finds sum of var arguments
 * @n: number of var argumenst
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = n;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i--)
		sum += va_start(args, int);
	va_end(args);
	return (sum);
}

