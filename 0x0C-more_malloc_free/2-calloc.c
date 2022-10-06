#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: byte size of elements
 * Return: a void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	pr = malloc(nmemb * size);
	if (!pr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pr[i] = 0;
	return (pr);
}
