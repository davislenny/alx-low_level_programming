#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: mem size allocated by 
 * @new_size: mem size reallocated using realloc
 * Return: pointer to the reallocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pr;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	pr = malloc(new_size);
	i (!pr)
		return (NULL);
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		pr[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (pr);
}
