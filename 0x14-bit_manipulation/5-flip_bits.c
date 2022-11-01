#include "main.h"

/**
 * flip_bits - returns the number of bits flipped
 * @n: 1st num
 * @m: 2nd num
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int diff;

	diff = n ^ m;/* xor bit difference */

	while (diff)
	{
		bit += diff & 1;
		diff >>= 1;
	}
	return (bit);
}
