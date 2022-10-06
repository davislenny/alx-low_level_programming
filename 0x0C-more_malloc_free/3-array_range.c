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
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(sizeof(*p) * j);
	if (!p)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		min++;
		p[i] = min;
	}
	return (p);
}
