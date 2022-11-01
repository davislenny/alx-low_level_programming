#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int i = 1;
	char *c = (char *)&i;

	return (c[0]);/* address of 1st byte stored, 00/01 for big/little */
}
