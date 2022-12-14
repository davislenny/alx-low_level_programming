#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to use
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pr = malloc(b);

	if (pr == NULL)
		exit(98);
	return (pr);
}
