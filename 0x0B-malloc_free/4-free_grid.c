#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @pr: 2D array memory pointer
 * @height: rows
 * Return: void
 */
void free_grid(int **pr, int height)
{
	int i;

	if (pr == NULL)
		free(pr);
	for (i = 0; i < height ; i++)
		free(pr[i]);
	free(pr);
}
