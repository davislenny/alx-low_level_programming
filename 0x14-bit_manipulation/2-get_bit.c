#include "main.h"

/**
 * get_bit - returns value of bit at index
 * @index: bit index
 * @n: number
 * Return: bit value or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
