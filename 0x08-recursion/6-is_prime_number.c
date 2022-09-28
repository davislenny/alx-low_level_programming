#include "main.h"
/**
 * cheq_prime - checks for prime numbers
 * @n: the number(s)
 * @i: determinant for the prime value
 * Return: 1 true 0 false
 */
int cheq_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (cheq_prime(n, i + 1));
}

#include "main.h"
/**
 * is_prime_number - check for prime integer
 * @n: the integer
 * Return: 1 true 0 false
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (cheq_prime(n, 2));
}
