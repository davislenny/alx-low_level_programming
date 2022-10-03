#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2D array
 * @width: the columns
 * @height: the rows
 * Return:  pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pr;

	if (width <= 0 || height <= 0)
		return (NULL);

	pr = malloc(height * sizeof(int *));
	if (pr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pr[i] = malloc(width * sizeof(int));
		if (pr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(pr[i]);
			free(pr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pr[i][j] = 0;
	}
	return (pr);
}
