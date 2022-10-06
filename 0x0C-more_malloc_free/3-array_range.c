#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the list int
 * @max: the grea int
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (!p)
		return (NULL);
	while (i--)
		p[i] = max--;
	return (p);
}
